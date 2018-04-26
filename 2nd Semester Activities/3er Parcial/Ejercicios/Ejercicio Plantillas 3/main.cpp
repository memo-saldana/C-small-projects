#include <iostream>
#include <string>
using namespace std;

template <class T>
void llenarArr(T arr[],int tam){
	T dato;
	for(int i=0; i<tam;i++){
		cout<<"Dame el elemento "<<i+1<<endl;
		cin>>dato;
		arr[i]=dato;
	}
}

template <class T>
void intercambia(T &a, T &b){
	T tmp;
					tmp = a;
	    			a = b;
				    b = tmp;
}

template <class T>
void ordenarArr(T arr[], int tam){
	int i, j;
 	

 	for (i = 0; i < tam-1; i++){  
       for (j = 0; j < tam-i-1; j++){
	           if (arr[j] > arr[j+1]){
	           		intercambia(arr[j],arr[j+1]);
	           }
	            	
       }

   }         
}

template <class T>
void desplegarArr(T arr[], int tam){
	for(int i=0;i<tam;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int tam, op, op2;
	bool iAlta = false, dAlta = false, cAlta = false;

	cout<<"Teclea el tamano del arreglo"<<endl;
	cin>>tam;

	int iArr[tam];
	char cArr[tam];
	double dArr[tam];

	do{
		cout<<"Tipo de arreglo con el que quieres trabajar? "<<endl;
	    cout<<"1. enteros "<<endl;
	    cout<<"2. caracteres "<<endl;
	    cout<<"3. dobles "<<endl;
	    cout<<"4. salir "<<endl;
	    cin>>op;
	    do{
		    cout<<"1. Dar de alta los "<<tam<<" elementos del arreglo "<<endl;
		    cout<<"2. Ordenar elementos del arreglo "<<endl;
		    cout<<"3. Desplegar los elementos del arreglo "<<endl;
		    cout<<"4. Salir "<<endl;
		    cin>>op2;

		    switch(op){
	    		case 1:
	    			switch(op2){
	    				case 1: 
	    					llenarArr(iArr,tam);
	    					iAlta=true;
	    					break;
	    				case 2:
		    				if(iAlta){
								ordenarArr(iArr,tam);
							}
		    				else{
		    					cout<<"Da de alta primero."<<endl;
		    				}
		    				break;

	    				case 3: 
	    					if(iAlta){
	    						desplegarArr(iArr,tam);
	    						}
	    					else{
	    						cout<<"Da de alta primero."<<endl;
	    					}
	    					break;

	    				case 4:
	    					break;
	    				default:
	    					cout<<"Opcion invalida."<<endl;
	    			}
	    			break;
	    		case 2:
	    			switch(op2){
	    				case 1:
	    					cAlta=true;
	    					llenarArr(cArr,tam);
	    					break;
	    				case 2:
	    					if(cAlta){
		    					ordenarArr(cArr,tam);
		    					
	    					}
	    					else{
	    						cout<<"Da de alta primero."<<endl;
	    					}
	    					break;

	    				case 3: 
	    					if(cAlta){
								desplegarArr(cArr,tam);
							}
	    					else{
	    						cout<<"Da de alta primero."<<endl;
	    					}
	    					break;

	    				case 4:
	    					break;
	    			}	
	    			break;
	    		case 3:
	    			switch(op2){
	    				case 1: 
	    					dAlta=true;
	    					llenarArr(dArr,tam);
	    					break;
	    				case 2:
	    					if(dAlta){
		    					ordenarArr(dArr,tam);
		    				}
	    					else{
	    						cout<<"Da de alta primero."<<endl;
	    					}
	    					break;

	    				case 3:
	    					if(dAlta){ 
	    					desplegarArr(dArr,tam);
	    					}
	    					else{
	    						cout<<"Da de alta primero."<<endl;
	    					}
	    					break;
	    				case 4:
	    					break;
	    			}	
	    			break;
	    		case 4:
	    			break;
	    		default:
	    			cout<<"Opcion invalida."<<endl;
	    	}	
	    }while(op2!=4);
	    
	}while(op!=4);
	return 0;
}