#ifndef LIBRO_H_INCLUDED
#define LIBRO_H_INCLUDED

class Libro {

private:
    //Atributos Privados
    int titulo;
    string autor;
    double precio;

public:

    //Constructores default y con parametros
    Libro();
    Libro(int titu, string aut, double prec);

    //Metodos de modificacion
    void setTitulo(int titu);
    void setAutor(string aut);
    void setPrecio(double prec);

    //Metodos de accesso
    int getTitulo();
    string getAutor();
    double getPrecio();

    //Metodos para mas funcionalidades
    void subePrecio(double porcentaje);
    void muestra();

};


//Implementacion de constructores, metodos de acceso y modificacion, y de otras funcionalidades
Libro::Libro(){
    titulo = 0;
    autor = "";
    precio = 0;
}
Libro::Libro(int titu, string aut, double prec){
    titulo = titu;
    autor = aut;
    precio = prec;
}

void Libro::setTitulo(int titu){
    titulo = titu;
}

void Libro::setAutor(string aut){
    autor = aut;
}
void Libro::setPrecio(double prec){
    precio = prec;
}

int Libro::getTitulo(){
    return titulo;
}
string Libro::getAutor(){
    return autor;
}
double Libro::getPrecio(){
    return precio;
}

//Se sube el precio por un porcentaje, que se pide en decimal, por lo que se agrega un 1 y se multiplica por el precio actual.
void Libro::subePrecio(double porcentaje){
    precio*=(1.0+porcentaje);
}

//Muestra los valores actuales de cada atributo del objeto
void Libro::muestra(){
    cout<<"Titulo: "<<titulo<<endl;
    cout<<"Autor: "<<autor<<endl;
    cout<<"Precio: "<<precio<<endl<<endl;
}
#endif // LIBRO_H_INCLUDED
