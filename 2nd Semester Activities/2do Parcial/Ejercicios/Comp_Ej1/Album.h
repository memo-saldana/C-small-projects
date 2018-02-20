#ifndef ALBUM_H_INCLUDED
#define ALBUM_H_INCLUDED

class Album{
private:
    string nombreAlbum;
    string genero;
    string artista;
    Fecha fechaLanzamiento;

public:

    //Constructores
    Album();
    Album(string nombreAlbum, string genero, string artista, Fecha fechaLanzamiento);

    //Metodos de acceso
    string getNombreAlbum();
    string getGenero();
    string getArtista();
    Fecha getFechaLanzamiento();

    //Metodos de modificacion
    void setNombreAlbum(string nombreAlbum);
    void setGenero(string genero);
    void setArtista(string artista);
    void setFechaLanzamiento(Fecha fechaLanzamiento);

    void muestra();

};

    //Constructores
Album::Album(){
    nombreAlbum="";
    genero="";
    artista="";
    Fecha();
}

Album::Album(string nombreAlbum, string genero, string artista, Fecha fechaLanzamiento){
    this->nombreAlbum=nombreAlbum;
    this->genero=genero;
    this->artista=artista;
    this->fechaLanzamiento=fechaLanzamiento;
}

    //Metodos de acceso
string Album::getNombreAlbum(){
    return nombreAlbum;
}

string Album::getGenero(){
    return genero;
}

string Album::getArtista(){
    return artista;
}

Fecha Album::getFechaLanzamiento(){
    return fechaLanzamiento;
}

//Metodos de modificacion
void Album::setNombreAlbum(string nombreAlbum){
    this->nombreAlbum=nombreAlbum;
}

void Album::setGenero(string genero){
    this->genero=genero;
}

void Album::setArtista(string artista){
    this->artista=artista;
}

void Album::setFechaLanzamiento(Fecha fechaLanzamiento){
    this->fechaLanzamiento=fechaLanzamiento;
}


void Album::muestra(){
    cout<<nombreAlbum<<endl;
    fechaLanzamiento.muestra();
}


#endif // ALBUM_H_INCLUDED
