
#ifndef EQUIPO_H_INCLUDED
#define EQUIPO_H_INCLUDED

//Nombre de la clase
class Equipo {

//Atributos privados
private:
    string nombre;
    int pJugados;
    int pGanados;
    int pEmpatados;


public:

//Constructor
Equipo();

 //Metodos de modificacion

  void setNombre(string );
  void setPJugados(int);
  void setPGanados(int);
  void setPEmpatados(int);



//Metodos de acceso

  string getNombre();
  int getPJugados();
  int getPGanados();
  int getPEmpatados();
  int calcularPuntos();

};

//Implementación de constructor>
Equipo::Equipo() {
  pJugados = 0;
  pGanados = 0;
  pEmpatados = 0;

}

//Implementación de metodos de acceso y modificacion
string Equipo::getNombre() {
  return nombre;
}

int Equipo::getPJugados() {
  return pJugados;
}

int Equipo::getPGanados() {
  return pGanados;
}

int Equipo::getPEmpatados() {
  return pEmpatados;
}

void Equipo::setNombre(string nombre) {
  this->nombre = nombre;
}

void Equipo::setPJugados(int pJugados) {
  this->pJugados = pJugados;
}

void Equipo::setPGanados(int pGanados) {
  this->pGanados = pGanados;
}

void Equipo::setPEmpatados(int pEmpatados) {
  this->pEmpatados = pEmpatados;
}

//Metodo para calcular los puntos del equipo, ganados valen 3 y empatados valen 1

int Equipo::calcularPuntos() {
  return pGanados*3 + pEmpatados;
}
#endif // EQUIPO_H_INCLUDE{D
