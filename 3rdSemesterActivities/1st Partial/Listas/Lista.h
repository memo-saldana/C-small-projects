// José Guillermo Saldaña Cárdenas A01039888

template <class T>
class Lista{
public:
	Lista();
	Lista(Lista<T> &l);
	int getCant();
	T getDato(int i);
	bool add(T element);
	int search(T element);
	void sort(bool ascendente);
	void operator = (Lista l);
	bool operator == (Lista l);
	void print();
	bool descendente(T datoizq, T datoder){ return datoizq > datoder;}

private:
	
	T arrDatos[10];
	int iCant;
};

// Constructor vacio
template<class T>
Lista<T>::Lista(){
	this->iCant =0;
}  

// Copy Constructor
template<class T>
Lista<T>::Lista(Lista &l){
	for (int i = 0; i < l.iCant; ++i)
	{
		this-> arrDatos[i]= l.arrDatos[i];
	}
	this->iCant = l.iCant;
}

// getCant() que regresa la cantidad de elementos en la lista
template<class T>
int Lista<T>::getCant(){
	return this->iCant;
}

// getDato() regresa un dato dado su indice en el arreglo
template<class T>
T Lista<T>::getDato(int i){
	return this->arrDatos[i];
}

// add() agrega un elemento al final de la lista, si aun tiene espacio, y r
// egresa verdadero cuando es posible o falso cuando el arreglo ya esta lleno
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

// search() busca el elemento en el arreglo y regresa su posicion, o -1 en caso de no estar
// dentro del arreglo
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

// sort() utiliza el sort de la libreria algorithm para ordenar de forma ascendente o descendente
// dependiendo del valor de la variable booleana dada
template<class T>
void Lista<T>::sort(bool ascendente){
	if(ascendente){
		std::sort(arrDatos, arrDatos + iCant);
	}
	else{
		std::sort(arrDatos, arrDatos + iCant, greater<T>());
	}
}

// Sobrecarga del operador = que crea una copia exacta del objeto de la derecha y lo asigna
// al de la izquierda.
template<class T>
void Lista<T>::operator = (Lista l){
	for (int i = 0; i < l.iCant; ++i)
	{
		this-> arrDatos[i]= l.arrDatos[i];
	}
	this->iCant = l.iCant;

}

// Sobrecarga del operador == que compara los elementos de las dos listas, regresa verdadero si son exactamente
// iguales y falso si no lo son
template <class T>
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

// Funcion para imprimir todos los elementos de la lista en formatp "<pos> - <dato>"
template<class T>
void Lista<T>::print(){
	for (int i = 0; i < iCant; ++i)
	{
		cout<<i<<" - "<<arrDatos[i]<<endl;
	}
}