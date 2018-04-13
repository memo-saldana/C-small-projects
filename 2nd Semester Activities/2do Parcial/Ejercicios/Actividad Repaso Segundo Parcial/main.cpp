#include <iostream>
#include <string>
using namespace std;
#include "Triangulo.h"
#include "Cuadrado.h"

int main(){
    Triangulo t1(10,5);
    /// agrega las instrucciones para ponerle color azul y posición 3,4
    t1.setColor("Azul");
    Coordenada cord(3,4);
    t1.setPosicion(cord);

    Triangulo t2("verde",3,4,12,120);
    // Deberás crear otro constructor con los cuatro parametros.
    Cuadrado c ("verde",120,80,12);
    ///muestra cada objeto
    t1.muestra();
    t2.muestra();
    c.muestra();
}
