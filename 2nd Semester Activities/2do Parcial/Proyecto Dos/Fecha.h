#ifndef Fecha_h
#define Fecha_h

class Fecha{
private:
    int dia, mes, anio;

public:
    // Constructores default y con parametros.
    Fecha();
    Fecha(int dia, int mes, int anio);

    // Metodos de acceso y modificacion
    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);
    int getDia();
    int getMes();
    int getAnio();

    // Metodos funcionales para mes, comprobación de si es viciesto y metodo muestra.
    string nombreMes();
    bool esBisiesto();
    void muestra();
};

// Constructores.
Fecha::Fecha(){
    dia=0;
    mes=0;
    anio=0;
}
Fecha::Fecha(int dia, int mes, int anio){
    this->dia=dia;
    this->mes=mes;
    this->anio=anio;
}

// Metodos de acceso y modificacion.
void Fecha::setDia(int dia){
    this->dia=dia;
}
void Fecha::setMes(int mes){
    this->mes = mes;
}
void Fecha::setAnio(int anio){
    this->anio=anio;
}
int Fecha::getDia(){
    return dia;
}
int Fecha::getMes(){
    return mes;
}
int Fecha::getAnio(){
    return anio;
}

// Metodos funcionales para representar el mes, verificar si el año es biciesto
// y mostrar datos en pantalla.
string Fecha::nombreMes(){
    switch(mes)
    {
        case 1:
            return "Febrero";
            break;
        case 2:
            return "Febrero";
            break;
        case 3:
            return "Marzo";
            break;
        case 4:
            return "Abril";
            break;
        case 5:
            return "Mayo";
            break;
        case 6:
            return "Junio";
            break;
        case 7:
            return "Julio";
            break;
        case 8:
            return "Agosto";
            break;
        case 9:
            return "Septiembre";
            break;
        case 10:
            return "Octubre";
            break;
        case 11:
            return "Noviembre";
            break;
        case 12:
            return "Diciembre";
            break;
        default:
            return "error";
            break;
    }
}

bool Fecha::esBisiesto(){
    if (anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0))
        return true;
    else
        return false;

}
void Fecha::muestra(){
    cout<<endl;
    cout<<"----------------------------------------------"<<endl;
    if (dia < 10)
        cout<<"0"<<dia<<"/"<<nombreMes()<<"/"<<anio;
    else
        cout<<dia<<"/"<<nombreMes()<<"/"<<anio;

    cout<< endl << "----------------------------------------------"<<endl;

}


#endif /* Fecha_h */