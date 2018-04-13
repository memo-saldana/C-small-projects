#ifndef Animal_h_included
#define Animal_h_included

class Animal {
public:
    Animal();
    Animal(string, int);
    void setNombre(string);
    void setAnioNacim(int);
    string getNombre();
    int getAnioNacim();
    int calculaEdad( );
    virtual void habla()=0;
    virtual void muestra();

protected:
    
    string nombre;
    int anioNacim;
};

Animal::Animal() {
    nombre = "";
    anioNacim = 0; }


Animal::Animal(string nom, int aNac) {
    nombre = nom;
    anioNacim = aNac; }

void Animal::setNombre(string n){
    nombre = n;
}
void Animal::setAnioNacim(int e){
    anioNacim= e;
}
string Animal::getNombre(){
    return nombre;
}
int Animal::getAnioNacim(){
    return anioNacim;
}

int Animal::calculaEdad() {
    return 2018 - anioNacim; }



void Animal::muestra(){
    cout<<"Animal nombre = "<<nombre<<" edad = "<<calculaEdad()<<endl;
}

#endif
