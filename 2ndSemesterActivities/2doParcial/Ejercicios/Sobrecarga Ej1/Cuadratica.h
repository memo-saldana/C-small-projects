#ifndef CUADRATICA_H_INCLUDED
#define CUADRATICA_H_INCLUDED


class Cuadratica
{





	public:
		Cuadratica();
		Cuadratica(int, int, int);
		void muestra();

		//Sobrecarga de operador + como funcion miembro
		Cuadratica operator +(Cuadratica n);

		//Sobrecarga de - como funcion amiga
		friend Cuadratica operator -(Cuadratica, Cuadratica);

		//Sobrecarga de * como miembro
		Cuadratica operator *(int n);

		//Sobrecarga de += como amiga
		friend void operator +=(Cuadratica &a, Cuadratica b);

		//Sobrecarga de == como miembro
		bool operator == (Cuadratica arg);

		//Sobrecarga de ++ como friend
		friend Cuadratica operator ++ (Cuadratica &a);

		//Sobcrecarga de << como friend
		friend ostream& operator << (ostream &os, Cuadratica a);

		//Sobrecarga de >> como friend
		friend istream& operator >> (istream &is, Cuadratica &a);

		double evalua(double x);
	private:
		int iCoefA, iCoefB, iCoefC;

};


Cuadratica::Cuadratica(){

	iCoefA = 1;
	iCoefB = 1;
	iCoefC = 1;
}
Cuadratica::Cuadratica(int iA, int iB, int iC)
{
	iCoefA = iA;
	iCoefB = iB;
	iCoefC = iC;
}
void Cuadratica::muestra(){
	
	if (iCoefA != 0){
 		
 		cout << iCoefA;
 		cout << "x^2 ";
 	}
 	if (iCoefB != 0){
 	
 		if (iCoefB > 0)
 		cout << " + ";
 		cout << iCoefB;
 		cout << "x ";
 	}
	if (iCoefC != 0){

		if (iCoefC > 0)
	 	cout << " + ";
	 	cout << iCoefC << endl;
	}
	
}

Cuadratica Cuadratica::operator +(Cuadratica n){

	Cuadratica resultado;
	resultado.iCoefA= iCoefA + n.iCoefA;
	resultado.iCoefB= iCoefB + n.iCoefB;
	resultado.iCoefC= iCoefC + n.iCoefC;

	return resultado;
}

Cuadratica operator -(Cuadratica a, Cuadratica b){

	Cuadratica res;
	res.iCoefA= a.iCoefA - b.iCoefA;
	res.iCoefB= a.iCoefB - b.iCoefB;
	res.iCoefC= a.iCoefC - b.iCoefC;

	return res;
}

Cuadratica Cuadratica::operator *(int n){

	Cuadratica res;
	res.iCoefA= iCoefA *2;
	res.iCoefB= iCoefB *2;
	res.iCoefC= iCoefC *2;

	return res;
}

void operator +=(Cuadratica &a, Cuadratica b){

	a.iCoefA= a.iCoefA + b.iCoefA;
	a.iCoefB= a.iCoefB + b.iCoefB;
	a.iCoefC= a.iCoefC + b.iCoefC;
}

bool Cuadratica::operator == (Cuadratica arg)
{
    if(iCoefA == arg.iCoefA && iCoefB == arg.iCoefB && iCoefC == arg.iCoefC)
        return true;
    
    else
        return false;
}

Cuadratica operator ++ (Cuadratica &a){
	a.iCoefC++;
	Cuadratica nueva;
	nueva.iCoefA = a.iCoefA;
	nueva.iCoefB = a.iCoefB;
	nueva.iCoefC = a.iCoefC;

	return a;
}

ostream& operator << (ostream &os, Cuadratica a){

	if (a.iCoefA != 0){
 		
 		os << a.iCoefA;
 		os << "x^2 ";
 	}
 	if (a.iCoefB != 0){
 	
 		if (a.iCoefB > 0)
 		os << " + ";
 		os << a.iCoefB;
 		os << "x ";
 	}
	if (a.iCoefC != 0){

		if (a.iCoefC > 0)
	 	os << " + ";
	 	os << a.iCoefC << endl;
	}

	return os;
}

istream& operator>>(istream &is, Cuadratica &a){

	is>>a.iCoefA;
	is>>a.iCoefB;
	is>>a.iCoefC;

	return is;
}

double Cuadratica::evalua(double x){

	return iCoefA * x * x + iCoefB * x + iCoefC;

}


#endif //CUADRATICA_H_INCLUDED