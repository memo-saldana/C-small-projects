#pragma once

class RectName: public Rectangulo{
	public:
		RectName();
		RectName(int, int, string);
		string getNombre();
		void setNombre(string nombre);
		void dibuja();
	private:
		string nombre;

};

RectName::RectName() : Rectangulo(){
	nombre = "";
}

RectName::RectName(int la, int h, string nombre) : Rectangulo(la,h) {
	this->nombre = nombre;
}

string RectName::getNombre(){
	return nombre;
}

void RectName::setNombre(string nombre){
	this->nombre = nombre;
}

void RectName::dibuja(){
	for (int r = 1; r <= alto; r++)
	{	// dibujo completo el primero y el ultimo renglon
		if (r == 1 || r == alto) 
		{	for (int c = 1; c <= largo; c++)
				cout<<"*";
			cout<<endl;
		}
		else if( r == (alto/2)){
			cout<<"* "<<nombre<<" *"<<endl;
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