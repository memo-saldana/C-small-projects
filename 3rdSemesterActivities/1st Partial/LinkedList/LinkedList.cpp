#include <iostream>
using namespace std;

#include "LinkedList.h"

int main(){
	LinkedList<string> miLista;

    miLista.addFirst("HOLA");
    miLista.addLast("ADRIAN");
    miLista.addFirst("AMA");
    miLista.addLast("SUBLIME");

    /* miLista.print();
    miLista.add("PELOS", 2);
    miLista.print();
    miLista.deleteFirst();
    miLista.print();
    miLista.deleteLast();
    miLista.print();
    cout << miLista.set("ADIOS", 1) << endl;
    miLista.print();
    miLista.del(2);
    miLista.print();
    miLista.deleteAll();
    miLista.print();
    miLista.addFirst("MÉXICO");
    miLista.print(); */
    // miLista.reverse();
    miLista.print();
    miLista.change(1,2);
    miLista.print();

    LinkedList<int> *tuLista = new LinkedList<int>();
    LinkedList<int> *laLista = new LinkedList<int>();

    tuLista->addFirst(100);
    tuLista->addLast(5);
    tuLista->addFirst(20);
    tuLista->addLast(40);
   
    laLista->addFirst(100);
    laLista->addLast(5);
    laLista->addFirst(2);
    laLista->addLast(40);

    tuLista->print();
    laLista->print();

    // tuLista->reverse();
    // tuLista->print();

		if(*tuLista == *laLista){
			cout<< "Iguales";
		}
		else {
			cout<< "Diferentes";
		}
		cout<<endl;

		*laLista+= 3;
		laLista->print();

		*laLista+= *tuLista;
		laLista->print();
		LinkedList<string> miLista2(miLista);
		LinkedList<string> miLista3;

		miLista3 = miLista;
		miLista.print();
		miLista2.print();
		miLista3.print();

		if(miLista2 == miLista){
			cout<< "Iguales";
		}
		else {
			cout<< "Diferentes";
		}

		delete laLista;
    delete tuLista;

    return 0;
		
}