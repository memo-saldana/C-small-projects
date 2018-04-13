#ifndef Coordenada_h
#define Coordenada_h

class Coordenada{

private:

	int x,y;

public:
	Coordenada();
	Coordenada(int,int);
	void muestra();
};

Coordenada::Coordenada(){
	x=0;
	y=0;
}
Coordenada::Coordenada(int x,int y){
	this->x=x;
	this->y=y;
}
void Coordenada::muestra(){
	cout<<"("<<x<<","<<y<<")";
}
#endif //Coordenada_h