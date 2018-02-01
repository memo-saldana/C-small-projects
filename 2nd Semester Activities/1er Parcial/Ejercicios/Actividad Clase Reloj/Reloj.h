#ifndef RELOJ_H_INCLUDED
#define RELOJ_H_INCLUDED

class Reloj{

private:

    int hora;
    int minu;

public:

    int getHora();
    int getMinu();
    void setHora(int n);
    void setMinu(int n);
    void muestra();

};

int Reloj::getHora(){
    return hora;
}

int Reloj::getMinu(){
    return minu;
}

void Reloj::setHora(int n){
    hora = n;
}
void Reloj::setMinu(int n){
    minu = n;
}
void Reloj::muestra(){
    if(hora<10){
        cout<<"0"<<hora;
    }
    else{
        cout<<hora;
    }
    cout<<":";
    if(minu<10){
        cout<<"0"<<minu;
    }
    else{
        cout<<minu;
    }
}


#endif // RELOJ_H_INCLUDED
