#pragma once

class Chequera : public CtaBanc{

private:
	double comision;

public:

	Chequera();
	Chequera(int numCuenta, double saldo, double comision);
	void setComision(int comision);
	int getComision();

	bool retira(double cant);

	void mostrar();
};


Chequera::Chequera() : CtaBanc(){

	comision = 0;

}

Chequera::Chequera(int numCuenta, double saldo, double comision) :CtaBanc(numCuenta, saldo){
	this-> comision = comision;

}


void Chequera::setComision(int comision){

	this->comision = comision;
}

int Chequera::getComision(){
	return comision;
}

bool Chequera::retira(double cant){
	if (saldo >= cant + comision)
	{	
		saldo -= cant;
		saldo -= comision;
		return true;
	}
	else{
		return false;	
	}
	
}

void Chequera::mostrar()
{	cout<<endl;
	cout<<"Tu cuenta "<<numCuenta<< " tiene un saldo: "<<saldo<<" y una comision de "<<comision<<" por retiro."<<endl;
}