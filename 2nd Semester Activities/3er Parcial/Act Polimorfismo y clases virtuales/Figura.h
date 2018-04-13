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

#endif //  Figura_h_included