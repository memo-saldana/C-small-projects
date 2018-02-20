#ifndef COMPUTADORA_H_INCLUDED
#define COMPUTADORA_H_INCLUDED

class Computadora {

private:
    //Atrbiutos privados
    string marca;
    string sistOperativo;
    int ram;

public:
    //Constructores
    Computadora();
    Computadora(string marca, string sistOperativo, int ram);

    //Metodos de acceso
    string getMarca();
    string getSistOperativo();
    int getRam();

    //Metodos de Modificación
    void setMarca(string marca);
    void setSistOperativo(string sistOperativo);
    void setRam(int ram);
};

    //Desarrollo de constructores
Computadora::Computadora(){
    marca="";
    sistOperativo="";
    ram=0;
}

Computadora::Computadora(string marca, string sistOperativo, int ram){
    this->marca=marca;
    this->sistOperativo=sistOperativo;
    this->ram=ram;
}

//Desarrollo de metodos de acceso
string Computadora::getMarca(){
    return marca;
}
string Computadora::getSistOperativo(){
    return sistOperativo;
}
int Computadora::getRam(){
    return ram;
}

//Desarrollo de metodos de Modificación
void Computadora::setMarca(string marca){
    this->marca=marca;
}
void Computadora::setSistOperativo(string sistOperativo){
    this->sistOperativo=sistOperativo;
}

void Computadora::setRam(int ram){
    this->ram=ram;
}


#endif // COMPUTADORA_H_INCLUDED
