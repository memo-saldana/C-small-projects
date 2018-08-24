template <class T>
class Lista{
public:
	Lista();
	Lista(Lista<T> &l);
	int getCant();
	T getDato(int i);
	bool add(T element);
	int search(T element);
	void ordena(bool ascendente);
	Lista<T> operator = (Lista l);
	bool operator == (Lista l);
	void print();
	bool descendente(T datoizq, T datoder){ return datoizq > datoder;}

private:
	
	T arrDatos[10];
	int iCant;
};

template<class T>
Lista<T>::Lista(){
	this->iCant =0;
}

template<class T>
Lista<T>::Lista(Lista &l){
	for (int i = 0; i < l.iCant; ++i)
	{
		this-> arrDatos[i]= l.arrDatos[i];
	}
	this->iCant = l.iCant;
}

template<class T>
int Lista<T>::getCant(){
	return this->iCant;
}

template<class T>
T Lista<T>::getDato(int i){
	return this->arrDatos[i];
}

template<class T>
bool Lista<T>::add(T element){
	if(iCant<10){
		arrDatos[iCant] = element;
		iCant++;
		return true;
	}
	else {
		return false;
	}
}

template<class T>
int Lista<T>::search(T element){
 for (int i = 0; i < iCant; ++i)
 {
 	if(this->arrDatos[i] == element){
 		return i;
 	}
 }
 return -1;
}


template<class T>
void Lista<T>::ordena(bool ascendente){
	if(ascendente){
		sort(arrDatos, arrDatos + iCant);
	}
	else{
		sort(arrDatos, arrDatos + iCant, greater<T>());
	}
}

template<class T>
Lista<T> Lista<T>::operator = (Lista l){
	for (int i = 0; i < l.iCant; ++i)
	{
		this-> arrDatos[i]= l.arrDatos[i];
	}
	this->iCant = l.iCant;
	
}

template<class T>
bool Lista<T>::operator == (Lista l){
	if (this->iCant == l.iCant)
	{
		for (int i = 0; i < this->iCant; ++i)
		{
			if(this->arrDatos[i]!=l.arrDatos[i]){
				return false;
			}
		}		
	return true;
	}
	else{
		return false;
	}
}

template<class T>
void Lista<T>::print(){
	for (int i = 0; i < iCant; ++i)
	{
		cout<<i<<" - "<<arrDatos[i]<<endl;
	}
}