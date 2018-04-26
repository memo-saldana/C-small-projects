#ifndef FRACTIONS_H_INCLUDED
#define FRACTIONS_H_INCLUDED

class Fractions{
private:
    int numerator;
    int denominator;

public:
    class errorFrac{
    public:
        string origen;
        errorFrac(string origen){
            this->origen=origen;            
        }
    };
    // Construction Methods.
    Fractions ();
    Fractions (int numerator, int denominator);

    // Modification and access methods;
    void setNumerator (int n);
    void setDenominator (int d);
    int getNumerator ();
    int getDenominator ();

    // Functional methods.
    double realValue ();
};

Fractions::Fractions(int numerator, int denominator){
    this->numerator = numerator;
    if(denominator==0){
        throw errorFrac("constructor by params");
    }
    else{
        this->denominator = denominator;
    }
    
}

Fractions::Fractions(){
    numerator = 1;
    denominator = 2;
}
void Fractions::setNumerator (int numerator){
    this->numerator = numerator;
}
void Fractions::setDenominator (int denominator){
    if(denominator==0){
        throw errorFrac("setDenominator");
    }
    else{
        this->denominator = denominator;
    }
    
}
int Fractions::getNumerator (){
    return numerator;
}
int Fractions::getDenominator (){
    return denominator;
}
double Fractions::realValue(){
    return ((double)numerator) / (double) denominator;
}


#endif // FRACTIONS_H_INCLUDED