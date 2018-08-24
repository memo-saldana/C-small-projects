#include <iostream>
using namespace std;
#include "Tiempo.h"
int main()
{
{
Tiempo a(20, 15, 10), b(12, 50, 20), c;
Tiempo p(22, 45, 20), q(15, 30, 45), r;
Tiempo x(12, 45, 30), y(21, 30, 40), z;
int equivalente;
// SUMA
cout << "Suma 2 tiempos " << endl;
c = a + b;
c.muestra();
r = p + q;
r.muestra();
z = x + y;
z.muestra();
x.muestra();
y.muestra();
cout << endl;
// cout<<"El tiempo equivalente en segundos es:";
cout << "Equivalente en segundos " << endl;
equivalente = !c;
cout << equivalente << endl;
cout << endl;
}
{
Tiempo a(6, 15, 45), b(1, 22, 25), d(3, 34, 3), c;
// SUMA SEGUNDOS
cout << "Suma Tiempo + segundos, regresa Tiempo " << endl;
c = a + 25;
c.muestra();
c = b + 90;
c.muestra();
c = d + 15;
c.muestra();
cout << endl;
// RESTA SEGUNDOS
cout << "Resta Tiempo - segundos, regresa Tiempo " << endl;
c = a - 90;
c.muestra();
c = b - 5;
c.muestra();
c = d - 12;
c.muestra();
cout << endl;
}
// MAYOR QUE
{
Tiempo a(12, 15, 40), b(12, 50, 20), c;
Tiempo p(22, 15, 20), q(15, 35, 45), r;
Tiempo x(12, 45, 30), y(12, 45, 20), z;
cout << "Mayor que " << endl;
if (a > b)
cout<<"a > b"<<endl;
else
cout<<"a no es > b"<<endl;
if (p > q)
cout<<"p > q"<<endl;
else
cout<<"p no es > q"<<endl;
if (x > y)
cout<<"x > y"<<endl;
else
cout<<"x no es > y"<<endl;
cout << endl;
// MENOR QUE
cout << "Menor que " << endl;
if (a < b)
cout<<"a < b"<<endl;
else
cout<<"a no es < b"<<endl;
if (p < q)
cout<<"p < q"<<endl;
else
cout<<"p no es < q"<<endl;
if (x < y)
cout<<"x < y"<<endl;
else
cout<<"x no es < y"<<endl;
cout << endl;
}
{
Tiempo a(20, 15, 10), b(12, 50, 20), c;
Tiempo p(22, 45, 20), q(15, 30, 59), r;
Tiempo x(12, 45, 30), y(21, 30, 40), z;
// INCREMENTO
cout << "Incremento " << endl;
c = ++b;
c.muestra();
b.muestra();
cout << endl;
c = ++q;
c.muestra();
q.muestra();
cout << endl;
// +=
cout << "Operador += " << endl;
a += b;
a.muestra();
b.muestra();
cout << endl;
p += q;
p.muestra();
q.muestra();
}
return 0;
}
