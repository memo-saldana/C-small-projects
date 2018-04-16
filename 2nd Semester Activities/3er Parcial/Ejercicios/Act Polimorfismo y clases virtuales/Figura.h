#ifndef Figura_h_included
#define Figura_h_included

class Figura
{
public:
    Figura();
    virtual double calcArea();
    virtual double calcPerimetro();
    virtual void muestraQueSoy();

protected:
    
};

Figura::Figura(){
}
double Figura::calcArea(){
	return 0;
}
double Figura::calcPerimetro(){
	return 0;
}
void Figura::muestraQueSoy(){
	cout<<"Soy una Figura"<<endl;
}

#endif //  Figura_h_included