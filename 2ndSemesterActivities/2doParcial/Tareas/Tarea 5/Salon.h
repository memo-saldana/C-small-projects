#ifndef SALON_H_INCLUDED
#define SALON_H_INCLUDED

class Salon {

private:
    //Atributos privados
    int idSalon;
    Computadora compuSalon;

public:
    //Constructores
    Salon();
    Salon(int idSalon, Computadora compuSalon);

    //Metodos de acceso
    int getIdSalon();
    Computadora getCompuSalon();

    //Metodos de modificación
    void setIdSalon(int idSalon);
    void setCompuSalon(Computadora compuSalon);

};

//Desarrollo de constructores
Salon::Salon(){
    idSalon=0;
    Computadora();
}

Salon::Salon(int idSalon, Computadora compuSalon){
    this->idSalon=idSalon;
    this->compuSalon=compuSalon;
}

//Metodos de acceso
int Salon::getIdSalon(){
    return idSalon;
}

Computadora Salon::getCompuSalon(){
    return compuSalon;
}

//Metodos de modificación
void Salon::setIdSalon(int idSalon){
    this->idSalon=idSalon;
}

void Salon::setCompuSalon(Computadora compuSalon){
    this->compuSalon=compuSalon;
}


#endif // SALON_H_INCLUDED
