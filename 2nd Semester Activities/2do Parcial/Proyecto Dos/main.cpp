#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#include "Fecha.h"
#include "Pacientes.h"
#include "Doctor.h"
#include "Cirugias.h"

int cir,pacs=0,docs=0;

/*
 * La funcion muestra los datos generales de una cirugia
 * Argumentos: objeto cirugia
 * Retornos: ninguno.
 */
void muestraCirugia(Cirugias cirugia){
    cout << endl;
    cout << "-------------------------------" << endl;
    cout << "Id Doctor: " << cirugia.getIdDoctor() << endl;
    cout << "Id Cirugia " << cirugia.getIdCirugia() << endl;
    cout << "Duracion " << cirugia.getDuracion() << endl;
    cout << "Descripcion " << cirugia.getDescripcion() << endl;
    cout << "Fecha ";
    cirugia.getFechaCx().muestra();
    cout << endl;
    cout << "-------------------------------" << endl;
}

/*
 * La funcion verifica los ids provistos y posteriromente indexa los pacientes a la cirugia
 * Argumentos: array de objetos cirugia y array de objetos paciente.
 * Retornos: ninguno.
 */
void altaPaciente(Cirugias arrCir[], Pacientes arrPacs[]){
  // Declaracion de variables para los ids
  int idPaciente, idCirugia;
  
  cout << "Favor de ingresar el ID la cirugia\n";
  cin >> idCirugia;
  cout << "Favor de ingresar el ID del paciente\n";
  cin >> idPaciente;
  
  // En el primer loop verifica que exista el id de la cirugia.
  for(int i = 0; i < cir; i++){
    if (idCirugia == arrCir[i].getIdCirugia()){
      for(int j = 0; j < pacs; j++){
        // Si sí existe el segundo loop verifica que que exista el id del paciente.
        if (idPaciente == arrPacs[j].getIdPx()){
          // Una vez verificadas ambas partes utiliza el método para agregar pacientes que verifica
          // que sea posible agregar al paciente y notifica que se hizo o no.
          if (arrCir[i].agregarPaciente(idPaciente))
            cout << "Exito !\n";
          else
            cout << "Error.\n";
        }
      }
    }
  }
}

/*
 * La funcion verifica que la fecha provista sea valida, posteriormente busca las cirugias en dicha fecha 
 * y despliega las cirugias de esa fecha.
 * Argumentos: array de objetos cirugia
 * Retornos: ninguno.
 */
void consultaPorFecha(Cirugias arrCir[]){
  
  //Se pude el mes dia y año
  int dia,mes,anio;
  cout<<"Teclea el dia, mes y año, en ese orden";
  cin>>dia>>mes>>anio;
  
  //Se valida que la fecha sea correcta
  if(dia>0 && mes >0 &&  mes < 13 && ((mes == 2 && dia < 28) || (mes == 4 || mes == 6 || mes == 9 || mes == 11 && dia <31) || (dia < 32))){
    
    //Si la fecha dada es igual a la fecha de la cirugia, se muestran los datos geneerales
    for(int i=0;i<cir;i++){

      if(dia== arrCir[i].getFechaCx().getDia() && mes == arrCir[i].getFechaCx().getMes() && anio == arrCir[i].getFechaCx().getAnio()){
      
        muestraCirugia(arrCir[i]);
      
      }
    }  
  }  
}

/*
 * La funcion verifica el id de cirugia, despues despliega los datos de la cirugia, posteriormente
 * busca los pacientes de la respectiva cirugia con el id del paciente comparando con el array de objetos tipo paciente
 * Notifica al usuario si la cirugia no existe o si la cirugia no tiene pacientes.
 * Argumentos: array de objetos cirugia, array de objetos paciente
 * Retornos: ninguno.
 */
void consultaCirugia(Cirugias arrCir[], Pacientes arrPac[]){
  int idCirugia;
  
  bool flagC = false, flagP = false;
  // Pide Usuario un id para la cirugia
  cout << "Ingrese el ID de la cirugia\n";
  cin >> idCirugia;
  
  // El primer loop corrobora que exista el id de cirugia provist.
  for (int i = 0; i < cir; i++){
    
    // En caso de existir muestra los datos generales de la cirugia.
    if(idCirugia == arrCir[i].getIdCirugia()){
      muestraCirugia(arrCir[i]);
      flagC = true;
      
      // Posteriormente un par de arrays comparan el id del paciente que se encuentra en la cirugia con el array
      // de pacientes y si son iguales utiliza el metodo muestra de la clase paciente para impirmir la informacion
      // de los pacientes.
      for (int j = 0; j < arrCir[i].getCantPx(); j++){
        
        for(int k = 0; k < pacs; k++){
          
          if (arrCir[i].getListaPx(j) == arrPac[k].getIdPx())
            arrPac[k].muestra();
            flagP = true;
        }
      }
    }
  }
  
  // Notifica al usuario de la falta de pacientes o cirugias.
  if(!flagC){
    cout << "La cirugia no existe.\n";
  }
  if(!flagP && flagC){
    cout << "La cirugia no tiene pacientes.\n";
  }
  
}
     
/*
 * La funcion verifica el id del doctor, despues despliega los datos de las cirugias del doctor buscado
 * En caso de que el doctor no exista o el doctor exista pero no tenga cirugias, notifica al usuario.
 * Argumentos: array de objetos cirugia, array de objetos doctor.
 * Retornos: ninguno.
 */      
void consultaPorDoctor(Cirugias arrCir[], Doctor arrDoc[]){
  int idDoctor;
  bool existe=false, hay=false;
  
  // Solicita el id del doctor
  cout<<"Teclea el ID del doctor."<<endl;
  cin>>idDoctor;
  
  // Verifica que el id del doctor existe
  for(int j=0; j<docs;j++){
    if(arrDoc[j].getIdDoctor() == idDoctor){

      existe = true;
      
      // Busca las cirugias del doctor y las presenta en la pantalla
      for(int i=0;i<cir;i++){
        if(idDoctor == arrCir[i].getIdDoctor()){
          
          hay = true;
          muestraCirugia(arrCir[i]);
        }
      } 
      
    }
  }
  
  
  // Notifica si el doctor existe o no y si el mismo tiene cirugias programadas
  if(!existe){
    cout<< "El doctor no existe." << endl;
  }
  if(existe && !hay){
    cout<< "No hay cirugias con este doctor.";
  }
  
}     
     
     
void consultaPorPaciente(Cirugias arrCir[], Pacientes arrPac[]){
  int idPaciente;
  bool existe = false, hay = true;
  
  cout<< "Teclea el ID del paciente." <<endl;
  cin>> idPaciente;
  
  for(int i = 0; i<pacs; i ++){
    if(idPaciente == arrPac[i].getIdPx()){
      existe = true;
      for(int j=0; j<cir;j++){
        for(int k = 0; k<arrCir[j].getCantPx();k++){
          if(idPaciente = arrCir[j].getListaPx(k)){
            hay = true;
            muestraCirugia(arrCir[i]);
          }
        }   
      }
    }
  }
  
  if(!existe){
    cout<< "No existe el paciente."<<endl;
  }
  
  if(existe && !hay){
    cout<< "El paciente no tiene cirugas."<<endl;
  }
}     

int main(){
  Doctor arrDoc[5];
  Pacientes arrPac[15];
  Cirugias arrCir[10], temp;
  int num, esp,dia,mes,anio;
  string str, nombre, apellido, genero;
  char option;

  ifstream archDoc,archPac;
  archDoc.open("Doctores.txt");
  archPac.open("Pacientes.txt");

  while(archDoc>>num && docs<5){

    arrDoc[docs].setIdDoctor(num);

    getline(archDoc,str);
    for(esp = str.length()-1; str[esp] != ' '; esp--){
    	
    }

    arrDoc[docs].setNombre(str.substr(1,esp-1));
    arrDoc[docs].setEspecialidad(str.substr(esp+1));
    docs++;
  }
  archDoc.close();
  while(archPac>>num && pacs < 10 ){
    arrPac[pacs].setIdPx(num);

    archPac>>nombre>>apellido>>genero>>num;
    nombre+=apellido;

    arrPac[pacs].setNombre(nombre);
    arrPac[pacs].setGenero(genero);
    arrPac[pacs].setEdad(num);

    pacs++;  
  }
  archPac.close();             
                           
  cout<<"Teclea el numero de cirugias"<<endl;
  cin>>cir;

  for(int j=0; j<cir; j++ ){
    
    
    cout<<"Teclea el ID de la cirugia."<<endl;
    cin>>num;
    arrCir[cir].setIdCirugia(num);
    
  
    cout<<"Teclea el ID del doctor."<<endl;
    cin>>num;
    arrCir[cir].setIdDoctor(num);
    
    cout<<"Teclea la duracion."<<endl;
    cin>>num;
    arrCir[cir].setDuracion(num);
    
    cout<<"Teclea la descripcion."<<endl;
    cin.ignore();
    getline(cin,str);
    arrCir[cir].setDescripcion(str);
    
    cout<<"Teclea el dia, mes y año de la cirugia, en ese orden."<<endl;
    cin>>dia>>mes>>anio;
    
  }
  
  // Despliega menú para que el usuario elija una funcion
  do{
    cout << "Elige una de las siguientes opciones: " << endl;
    cout << "\t a. Consulta todas las cirugias a realizar.\n";
    cout << "\t b. Dar de alta un paciente para una cirugia.\n";
    cout << "\t c. Consulta de cirugia por fecha.\n";
    cout << "\t d. Consulta por id de la cirugia.\n";
    cout << "\t e. Consulta de cirugias de un(a) doctor(a).\n";
    cout << "\t f. Consulta la lista de cirugias que se la han practicado a un paciente.\n";
    cout << "\t g. Salir.\n";
    cout << "Opcion: ";
    cin >> option;
    
    // Dependiendo de la opción se hace llamado a la funcion necesaria para cada opcion
    switch(toupper(option)){
      case 'A':
      	
        for (int k; k < cir; k++){
        	cout<< "Prueba";
        	temp =arrCir[k];
          muestraCirugia(temp);
        }
        break;
      
      case 'B':
        altaPaciente(arrCir, arrPac);
        break;
        
      case 'C':
        consultaPorFecha(arrCir);
        break;
        
      case 'D':
        consultaCirugia(arrCir, arrPac);
        break;
        
      case 'E':
        consultaPorDoctor(arrCir, arrDoc);
        break;
        
      case 'F':
        consultaPorPaciente(arrCir,arrPac);
        break;
        
      case 'G':
        return 0;
        
      
      default:
          cout<<"Opcion erronea, vuelva a intentar."<<endl;
          
    }
  }while (toupper(option) != 'g');
    
  



  return 0;
}
                           
