#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

//Se define a la clase Persona, en donde se haran todos los procesos para generar cada parte del CURP
class Persona {

//Atributos privados. Esta es toda la informacion requerida para generar el CURP
private:
    string pNombre;
    string sNombre;
    string pApellido;
    string sApellido;
    string sexo;
    string lugar;
    string dia;
    string mes;
    string ano;

public:

//Constructores. Uno default y uno con un string del cual se identifican cada parte de los atributos.
    Persona();
    Persona(string datos);

//Metodos de acceso.
    string getPNombre();
    string getSNombre();
    string getPApellido();
    string getSApellido();
    string getSexo();
    string getLugar();
    string getDia();
    string getMes();
    string getAno();

//Metodos de modificacion
    void setPNombre(string n);
    void setSNombre(string n);
    void setPApellido(string n);
    void setSApellido(string n);
    void setSexo(string n);
    void setLugar(string n);
    void setDia(string n);
    void setMes(string n);
    void setAno(string n);

//Metodos funcionales. El muestraDatos() se utiliza para ver los datos de la persona en caso que se requiera, los demas son para inr generando cada seccion del CURP
    void muestraDatos();
    string creaIniciales();
    string creaFecha();
    char creaSexo();
    string creaEstado();
    string creaConsonantes();
    string creaID();

};

//Constructor default inicializa los strings sin caracteres dentro.
Persona::Persona(){
    pNombre="";
    sNombre="";
    pApellido="";
    sApellido="";
    sexo="";
    lugar="";
    dia="";
    mes="";
    ano="";
}

//El constructor con parametro utiliza el string para ir identificando cada atributo que se encuentra dentro del string
Persona::Persona(string datos){

//Variables para escanear el string
    int i=0,Nombres=1, palabra;

//Se utiliza un do while para contar cuantos nombres y apellidos se tienen.
    do{
        if(datos[i]==' '||datos[i]==','){
            Nombres++;
        }
        i++;
    }while(i<datos.length()&&datos[i]!=',');

//Si se cuentan 2 nombres, se infiere que es solo un nombre y un apellido.
    if(Nombres==2){

//En todos los casos, se busca los espacios, se copia el nombre al lugar correspondiente, y se borra el nombre
// copiado para facilitar el copiado de los demas datos. En el caso del ultimo nombre, se busca la coma para no
// copiarla dentro del nombre.
        palabra=datos.find(" ");
        pApellido=datos.substr(0,palabra);
        datos.erase(0,palabra+1);
        palabra=datos.find(",");
        pNombre=datos.substr(0,palabra);
        datos.erase(0,palabra+2);
    }

//Si se cuentan 3, serian 1 nombre y 2 apellidos.
    else if(Nombres==3){
        palabra=datos.find(" ");
        pApellido=datos.substr(0,palabra);
        datos.erase(0,palabra+1);
        palabra=datos.find(" ");
        sApellido=datos.substr(0,palabra);
        datos.erase(0,palabra+1);
        palabra=datos.find(",");
        pNombre=datos.substr(0,palabra);
        datos.erase(0,palabra+2);
    }

// So se cuentan 4, se toman 2 nombres y 2 apellidos.
    else if(Nombres==4){
        palabra=datos.find(" ");
        pApellido=datos.substr(0,palabra);
        datos.erase(0,palabra+1);
        palabra=datos.find(" ");
        sApellido=datos.substr(0,palabra);
        datos.erase(0,palabra+1);
        palabra=datos.find(" ");
        pNombre=datos.substr(0,palabra);
        datos.erase(0,palabra+1);
        palabra=datos.find(",");
        sNombre=datos.substr(0,palabra);
        datos.erase(0,palabra+2);

    }

//En cualquier otro caso, se denomina como error, se notifica al usuario, y se guardan todos los nombres y apellidos dentro del primer nombre.
    else{
        palabra=datos.find(",");
        pNombre=datos.substr(0,palabra);
        datos.erase(0,palabra+2);
        cout<<"CUIDADO: La persona "<<pNombre<<" tiene mas de 4 palabras en su nombre, su CURP podria generse erroneamente."<<endl;
    }

//Se copia el sexo al atributo y luego se borra del string orignal.
    palabra=datos.find(",");
    sexo=datos.substr(0,palabra);
    datos.erase(0,palabra+2);

//Se copia el estado al atributo lugar, pero se busca la palabra "el" en caso que
// el estado sea "el Distrtito Federal" o algun otro caso.
    if(datos.substr(9,2)=="el"){
        datos.erase(0,12);
    }else{
        datos.erase(0,9);
    }

    palabra= datos.find(" el");
    lugar=datos.substr(0,palabra);
    datos.erase(0,palabra+4);

//Se copia el dia, mes y año de nacimiento y despues se borra del string original.
    palabra= datos.find(" ");
    dia=datos.substr(0,palabra);
    datos.erase(0,palabra+4);
    palabra= datos.find(" ");
    mes=datos.substr(0,palabra);
    datos.erase(0,palabra+4);
    ano=datos;

}


//Implementacion general de metodos de acceso y modificacion.
string Persona::getPNombre(){
    return pNombre;
}
string Persona::getSNombre(){
    return sNombre;
}
string Persona::getPApellido(){
    return pApellido;
}
string Persona::getSApellido(){
    return sApellido;
}
string Persona::getSexo(){
    return sexo;
}
string Persona::getLugar(){
    return lugar;
}
string Persona::getDia(){
    return dia;
}
string Persona::getMes(){
    return mes;
}
string Persona::getAno(){
    return ano;
}


void Persona::setPNombre(string n){
    pNombre=n;
}
void Persona::setSNombre(string n){
    sNombre=n;
}
void Persona::setPApellido(string n){
    pApellido=n;
}
void Persona::setSApellido(string n){
    sApellido=n;
}
void Persona::setSexo(string n){
    sexo=n;
}
void Persona::setLugar(string n){
    lugar=n;
}
void Persona::setDia(string n){
    dia=n;
}
void Persona::setMes(string n){
    mes=n;
}
void Persona::setAno(string n){
    ano=n;
}

//El metodo muestraDatos expone los atributos en pantalla para el usuario.
void Persona::muestraDatos(){
    cout<<"Primer Nombre:"<<pNombre<<endl;
    cout<<"Segundo Nombre:"<<sNombre<<endl;
    cout<<"Primer Apellido:"<<pApellido<<endl;
    cout<<"Segundo Apellido:"<<sApellido<<endl;
    cout<<"Sexo:"<< sexo << endl;
    cout<<"Lugar:"<< lugar<< endl;
    cout<<"Dia:"<< dia<<endl;
    cout<<"Mes:"<< mes<< endl;
    cout<<"Año:"<<ano<<endl<<endl;
}

//El metodo creaIniciales utiliza los nombres y apellidos para regresar las inicales del curp
string Persona::creaIniciales(){
    string iniciales="";
    int i=1;
    bool vocal=false;

//Se toma la primera letra del primer apellido.
    iniciales+=pApellido[0];

//Se busca la primer vocal del primer apellido, que no sea la primer letra. Por esto se empieza desde 1 y no 0.
    do{
        if(pApellido[i]=='a'||pApellido[i]=='e'||pApellido[i]=='i'||pApellido[i]=='o'||pApellido[i]=='u'){
            iniciales+=pApellido[i]-32;
            vocal=true;
        }
        i++;
    }while(!vocal&&i<pApellido.length());

//Si no se encuentra vocal, se pone una X
    if(!vocal){
        iniciales+="X";
    }

//Si no tiene segundo apellido, se pone una X, si si se pone solo la primera letra.
    if(sApellido==""){
        iniciales+="X";
    }
    else{
        iniciales+=sApellido[0];
    }

//Si su primer nombre es Jose o Maria, se pone la primera letra del segundo nombre, si no es asi se pone la primera
// letra del prmer nombre.
    if((pNombre!="Jose"&&pNombre!="Maria")||sNombre==""){
        iniciales+=pNombre[0];
    }
    else{
        iniciales+=sNombre[0];
    }

    return iniciales;
}

//El metodo creaFecha regresa la fecha de nacimiento en digitos, en el orden requerido para el CURP
string Persona::creaFecha(){
    string fecha;

//Ingresa los ultimos dos digitos del año
    fecha+=ano.substr(2,2);

//Dependiendo del mes, ingresa los dos digitos necesarios.
    if(mes=="enero"){
        fecha+="01";
    }
    else if(mes=="febrero"){
        fecha+="02";
    }
    else if(mes=="marzo"){
        fecha+="03";
    }
    else if(mes=="abril"){
        fecha+="04";
    }
    else if(mes=="mayo"){
        fecha+="05";
    }
    else if(mes=="junio"){
        fecha+="06";
    }
    else if(mes=="julio"){
        fecha+="07";
    }
    else if(mes=="agosto"){
        fecha+="08";
    }
    else if(mes=="septiembre"){
        fecha+="09";
    }
    else if(mes=="octubre"){
        fecha+="10";
    }
    else if(mes=="noviembre"){
        fecha+="11";
    }
    else if(mes=="diciembre"){
        fecha+="12";
    }

// Si no se encuentra un mes, se notifica al usuario que el mes fue ingresado incorrectamente y se muestra el mes recopilado.
// Se genera XX como mes.
    else{
        cout<<"El mes de "<<pNombre<<" "<<pApellido<<" fue ingresado incorrectamente. ( "<< mes<<" )"<<endl;
        fecha+="XX";
    }

//Si el dia es de un digito, se agrega un 0, y si no es asi se  agrega solamente el dia.
    if(dia.length()==1){
        fecha+="0";
    }
    fecha+=dia;
    return fecha;
}

//El metodo creaSexo regresa el caracter que representa el sexo de la persona.
char Persona::creaSexo(){
    char s;

//Le si es masculino o femenino y asigna el caracter.
    if(sexo=="masculino"){
        s='H';
    }
    else if(sexo=="femenino"){
        s='M';
    }

//Si el sexo no coincide, se notifica al usuario del error y se muestra el sexo recabado y se asigna X al sexo.
    else{
        cout<<"El sexo de "<<pNombre<<" "<<pApellido<<" fue ingresado incorrectamente.( "<<sexo<<" )"<<endl;
        s='X';
    }

    return s;
}

//El metodo creaEstado utiliza el atributo lugar para regresar las siglas del estado correspondiente
string Persona::creaEstado(){
    string estado,lug="";

    for(int i=0;i<lugar.length();i++){
        lug+=toupper(lugar[i]);
    }
    cout<<"lugar:"<<lugar<<endl<<"LUG:"<<lug<<endl;
//Dependiendo del estado se  las siglas.
    if(lug=="AGUASCALIENTES"){
        estado="AS";
    }
    else if(lug=="BAJA CALIFORNIA"){
        estado="BC";
    }
    else if(lug=="BAJA CALIFORNIA SUR"){
        estado="BS";
    }
    else if(lug=="CAMPECHE"){
        estado="CC";
    }
    else if(lug=="COAHUILA"){
        estado="CL";
    }
    else if(lug=="COLIMA"){
        estado="CM";
    }
    else if(lug=="CHIAPAS"){
        estado="CS";
    }
    else if(lug=="CHIHUAHUA"){
        estado="CH";
    }
    else if(lug=="DISTRITO FEDERAL"||lugar=="D.F."){
        estado="DF";
    }
    else if(lug=="DURANGO"){
        estado="DG";
    }
    else if(lug=="GUANAJUATO"){
        estado="GT";
    }
    else if(lug=="GUERRERO"){
        estado="GR";
    }
    else if(lug=="HIDALGO"){
        estado="HG";
    }
    else if(lug=="JALISCO"){
        estado="JC";
    }
    else if(lug=="MEXICO"){
        estado="MC";
    }
    else if(lug=="MICHOACAN"){
        lug="MN";
    }
    else if(lug=="MORELOS"){
        estado="MS";
    }
    else if(lug=="NAYARIT"){
        estado="NT";
    }
    else if(lug=="NUEVO LEON"){
        estado="NL";
    }
    else if(lug=="OAXACA"){
        estado="OC";
    }
    else if(lug=="PUEBLA"){
        estado="PL";
    }
    else if(lug=="QUERETARO"){
        estado="QT";
    }
    else if(lug=="QUINTANA ROO"){
        estado="QR";
    }
    else if(lug=="SAN LUIS POTOSI"){
        estado="SP";
    }
    else if(lug=="SINALOA"){
        estado="SL";
    }
    else if(lug=="SONORA"){
        estado="SR";
    }
    else if(lug=="TABASCCO"){
        estado="TC";
    }
    else if(lug=="TAMAULIPAS"){
        estado="TS";
    }
    else if(lug=="TLAXCALA"){
        estado="TL";
    }
    else if(lug=="VERACRUZ"){
        estado="VZ";
    }
    else if(lug=="YUCATAN"){
        estado="YN";
    }
    else if(lug=="ZACATECAS"){
        estado="ZS";
    }

//En caso de que no coincida se notifica al usuario y se asigna XX
    else{
        cout<<"El lugar de "<<pNombre<<" "<<pApellido<<" fue ingresado incorrectamente. ( "<<lugar<<" )"<<endl;
        estado="NE";
    }

    return estado;

}

//El metodo creaConsonantes regresa la primer consonante de cada apellido y el primer nombre que no sea la primer letra, en caso de que el primer nombre sea Jose o Maria,
// se toma la primer consonante que no sea la primer letra del segundo nombre.
string Persona::creaConsonantes(){
    string consonantes="";
    int i=1;
    bool consonante=false;

//Se utilizan do whiles para buscar la primer consonante que no sea la primer letra, por esto se empieza desde i=1
// se puede notar que es muy parecido a buscar vocales, pues se utiliza su negacion para no escribir todas las consonantes.
    do{
        if(pApellido[i]!='a'&&pApellido[i]!='e'&&pApellido[i]!='i'&&pApellido[i]!='o'&&pApellido[i]!='u'){

            consonantes+=pApellido[i]-32;
            consonante=true;
        }
        i++;
    }while(!consonante&&i<pApellido.length());
    i=1;
    consonante=false;
    do{
        if(sApellido[i]!='a'&&sApellido[i]!='e'&&sApellido[i]!='i'&&sApellido[i]!='o'&&sApellido[i]!='u'){

            consonantes+=sApellido[i]-32;
            consonante=true;
        }
        i++;
    }while(!consonante&&i<sApellido.length());

    i=1;
    consonante=false;
    if(pNombre=="Jose"||pNombre=="Maria"&&sNombre!=""){
        do{
            if(sNombre[i]!='a'&&sNombre[i]!='e'&&sNombre[i]!='i'&&sNombre[i]!='o'&&sNombre[i]!='u'){

                consonantes+=sNombre[i]-32;
                consonante=true;
            }
            i++;
        }while(!consonante&&i<pNombre.length());

    }
    else{
        do{
            if(pNombre[i]!='a'&&pNombre[i]!='e'&&pNombre[i]!='i'&&pNombre[i]!='o'&&pNombre[i]!='u'){

                consonantes+=pNombre[i]-32;
                consonante=true;
            }
            i++;
        }while(!consonante&&i<pNombre.length());
    }
    return consonantes;
}

//El metodo creaID genera 2 numeros aleatorios en caso que la persona haya nacido antes del 2000, o una letra y
// un numero en caso de que haya nacido durante o despues del 2000.
string Persona::creaID(){
    string ID="";
    int num;
    if(ano[0]<'2'){

//Para generar los numeros random se utiliza la libreria ctime.
        num= rand()%10;
        ID+=num+48;
        num= rand()%10;
        ID+=num+48;
    }
    else{

//en caso de necesitar una letra, se busca un numero entre 0 y 25, y se utiliza el codigo ASCII de la letra A para
// agregar la letra encontrada aleatoriamente.
        num= rand()%26;
        ID+= num+65;
        num=rand()%10;
        ID+= num+48;
    }

    return ID;
}

#endif // PERSONA_H_INCLUDED
