#include <iostream>
using namespace std;

class Rectangulo
{	public:
		Rectangulo();
		Rectangulo(int, int);		
		void dibuja();
		void setLargo(int);
		void setAlto(int);
    protected:
		int largo, alto;
}; 

Rectangulo :: Rectangulo()
{	largo = 1;
	alto = 1;
}

Rectangulo :: Rectangulo(int la, int h)
{	largo = la;
	alto = h;
}

void Rectangulo::setLargo(int la)
{	largo = la > 0 ? la : 1;
}

void Rectangulo::setAlto(int h)
{	alto = h > 0 ? h : 1;
}

void Rectangulo::dibuja()
{	for (int r = 1; r <= alto; r++)
	{	// dibujo completo el primero y el ultimo renglon
		if (r == 1 || r == alto) 
		{	for (int c = 1; c <= largo; c++)
				cout<<"*";
			cout<<endl;
		}
		else
		{
			// dibujo solo los caracteres de los extremos en los renglones del medio
			cout<<"*";
			for (int c = 2; c < largo; c++)
				cout<<" ";
			cout<<"*"<<endl;
		}
	}
}
