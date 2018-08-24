#include <iostream>
#include <string>
using namespace std;
#include "Fecha.h"
#include "Album.h"

int main()
{
    Album arrAlbum[5];
    int op,dia, mes, anio,i;
    string nombre, genero, artista;
    do{
        cout<<"Seleccione la opcion."<<endl;
        cout<<"1. Dar de alta albums."<<endl;
        cout<<"2. Consultar lista de albums."<<endl;
        cout<<"3. Albums de un artista."<<endl;
        cout<<"4. Albums por genero."<<endl;
        cout<<"5. Albums de un año especifico"<<endl;
        cout<<"6. Salir."<<endl;

        cin>>op;

        switch(op){
        case 1:
            if(i<5){

                cout<<"Teclea nombre del album, genero y artista."<<endl;
                cin>>nombre>>genero>>artista;
                cout<<"Tecela el dia,mes y año"<<endl;
                cin>>dia>>mes>>anio;
                arrAlbum[i].setNombreAlbum(nombre);
                arrAlbum[i].setGenero(genero);
                arrAlbum[i].setArtista(artista);
                Fecha temporal(dia,mes,anio);
                arrAlbum[i].setFechaLanzamiento(temporal);
            }
            else{
                cout<<"Error: Arreglo de albums lleno."<<endl;
            }
            break;

        case 2:

            for(int j=0;j<i;i++){
                arrAlbum[j].muestra();
            }
            break;

        case 3:
            cout<<"Teclea el artista a buscar"<<endl;
            cin>>artista;
            for(int j=0;j<i;j++){
                if(artista==arrAlbum[j].getArtista()){
                    arrAlbum[j].muestra();
                }
            }
            break;
        case 4:

            cout<<"Tecela el genero a buscar"<<endl;
            cin>>genero;
            for(int j=0;j<i;i++){
                if(genero==arrAlbum[j].getGenero()){
                    arrAlbum[j].muestra();
                }
            }
            break;

        case 5:

            cout<<"Teclea el año"<<endl;
            cin>>anio;
            for(int j=0;j<i;j++){
                if(anio==arrAlbum[j].getFechaLanzamiento().getAnio()){
                    arrAlbum[j].muestra();
                }
            }
            break;
        case 6:
            return 0;

        default:
            cout<<"Opcion erronea."<<endl;
        }
    }while(op!=6);

    return 0;
}
