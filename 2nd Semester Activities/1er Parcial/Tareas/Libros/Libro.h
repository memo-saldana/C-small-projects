#ifndef LIBRO_H_INCLUDED
#define LIBRO_H_INCLUDED

class Libro {

private:
    int titulo;
    string autor;
    double precio;

public:

    Libro();
    Libro(int titu, string aut, double prec);

    void setTitulo(int titu);
    void setAutor(string aut);
    void setPrecio(double prec);

    int getTitulo();
    string getAutor();
    double getPrecio();

    void subePrecio(double porcentaje);
    void muestra();

};

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

void Libro::subePrecio(double porcentaje){
    precio*=(1.0+porcentaje);
}
void Libro::muestra(){
    cout<<"Titulo: "<<titulo<<endl;
    cout<<"Autor: "<<autor<<endl;
    cout<<"Precio: "<<precio<<endl<<endl;
}
#endif // LIBRO_H_INCLUDED
