#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    char Menu,MasAlumnos;
    bool Check=false, Check2=true;
    int i=1, ContadorAlum;
    string Alumno;
    ofstream ArchAlumnos;

    while(i){

        cout<<"1) Crear el archivo"<<endl;
        cout<<"2) Contar cuantos alumnos son mayores a la edad solicitada"<<endl;
        cout<<"3) Salir"<<endl<<endl;
        cout<<"Eliga una opcion del menú: "<<endl;
        cin>> Menu;


        switch(Menu){

        case '1':

            Check=true;
            ArchAlumnos.open("Alumnos.txt");

            while(MasAlumnos!='n'){
                cout<<"Teclea la edad y el nombre del alumno separados por un espacio."<<endl;
                cin.ignore();
                getline(cin, Alumno);


                ArchAlumnos<<Alumno<<endl;
                cout<<"Deseas Agregar otro alumno? (s/n)";
                cin>>MasAlumnos;


            }
            ArchAlumnos.close();
            break;

        case '2':
            if(!Check){

                cout<<"Debe hacer la lista de alumnos primero." <<endl;
                break;
            }
            else{

                ContadorAlum=0;
                cout<<"Tecle la edad que busca."<<endl;
                int edadMayor,edad,AlumnosMayores=0;
                cin>>edadMayor;
                ifstream ArchEdad;
                ArchEdad.open("Alumnos.txt");

                for(int i=0;i<ContadorAlum;i++)
                {
                    ArchEdad>>edad;
                    getline(ArchEdad,Alumno);
                    if(edad>edadMayor){
                        AlumnosMayores++;
                    }
                }

                cout<<"La cantidad de alumnos mayores de "<<edadMayor<<" es de "<<AlumnosMayores<<endl;
                ArchEdad.close();

            }
            break;

        case '3': return 0;

        default:
            cout<<"Opcion erronea, intente otra vez."<<endl;
        }
    }
    ofstream ArchSal;


    return 0;
}
