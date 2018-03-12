#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
#include "Cirugias.h"

int pacs = 0, docs = 0, numCir;

/*
 * La funcion muestra los datos generales de una cirugia
 * Argumentos: objeto cirugia
 * Retornos: ninguno.
 */
void muestraCirugias(Cirugias cirugia){
	cout << endl;
    cout<<"----------------------------------------------"<<endl;
	cout << "ID doctor: " << cirugia.getIdDoctor() << endl;
	cout << "ID cirugia: " << cirugia.getIdCirugia() << endl;
	cout << "Duracion: " << cirugia.getDuracion() << endl;
	cout <<	"Descripcion: " << cirugia.getDescripcion() << endl;
	cout << "Fecha: ";
	cirugia.getFechaCx().muestra();
	cout << endl;
	cout<<"----------------------------------------------"<<endl;
}

/*
 * La funcion verifica los ids provistos y posteriromente indexa los pacientes a la cirugia
 * Argumentos: array de objetos cirugia y array de objetos paciente.
 * Retornos: ninguno.
 */
void altaPaciente(Cirugias arrCir[], Pacientes arrPacs[]){
  // Declaracion de variables para los ids
  int idPaciente, idCirugia;
  
  cout << "Favor de ingresar el ID la cirugia\n";
  cin >> idCirugia;
  cout << "Favor de ingresar el ID del paciente\n";
  cin >> idPaciente;
  
  // En el primer loop verifica que exista el id de la cirugia.
  for(int i = 0; i < numCir; i++){
    if (idCirugia == arrCir[i].getIdCirugia()){
      for(int j = 0; j < pacs; j++){
        // Si sí existe el segundo loop verifica que que exista el id del paciente.
        if (idPaciente == arrPacs[j].getIdPx()){
          // Una vez verificadas ambas partes utiliza el método para agregar pacientes que verifica
          // que sea posible agregar al paciente y notifica que se hizo o no.
          if (arrCir[i].agregarPaciente(idPaciente))
            cout << "\aExito !\n";
          else
            cout << "Error.\n";
        }
      }
    }
  }
}

/*
 * La funcion verifica que la fecha provista sea valida, posteriormente busca las cirugias en dicha fecha 
 * y despliega las cirugias de esa fecha.
 * Argumentos: array de objetos cirugia
 * Retornos: ninguno.
 */
void consultaPorFecha(Cirugias arrCir[]){
  
  //Se pude el mes dia y año
  int dia,mes,anio;
  cout<<"Teclea el dia, mes y año, en ese orden";
  cin>>dia>>mes>>anio;
  
  //Se valida que la fecha sea correcta
  if(dia>0 && mes >0 &&  mes < 13 && ((mes == 2 && dia < 28) || ((mes == 4 || mes == 6 || mes == 9 || mes == 11 ) && (dia <31)) || (dia < 32))){
    
    //Si la fecha dada es igual a la fecha de la cirugia, se muestran los datos geneerales
    for(int i=0;i<numCir;i++){

      if(dia== arrCir[i].getFechaCx().getDia() && mes == arrCir[i].getFechaCx().getMes() && anio == arrCir[i].getFechaCx().getAnio()){
      
        muestraCirugias(arrCir[i]);
      
      }
    }  
  }  
}

/*
 * La funcion verifica el id de cirugia, despues despliega los datos de la cirugia, posteriormente
 * busca los pacientes de la respectiva cirugia con el id del paciente comparando con el array de objetos tipo paciente
 * Notifica al usuario si la cirugia no existe o si la cirugia no tiene pacientes.
 * Argumentos: array de objetos cirugia, array de objetos paciente
 * Retornos: ninguno.
 */
void consultaCirugia(Cirugias arrCir[], Pacientes arrPac[]){
  int idCirugia;
  
  bool flagC = false, flagP = false;
  // Pide Usuario un id para la cirugia
  cout << "Ingrese el ID de la cirugia\n";
  cin >> idCirugia;
  
  // El primer loop corrobora que exista el id de cirugia provist.
  for (int i = 0; i < numCir; i++){
    
    // En caso de existir muestra los datos generales de la cirugia.
    if(idCirugia == arrCir[i].getIdCirugia()){
      muestraCirugias(arrCir[i]);
      flagC = true;
      
      // Posteriormente un par de arrays comparan el id del paciente que se encuentra en la cirugia con el array
      // de pacientes y si son iguales utiliza el metodo muestra de la clase paciente para impirmir la informacion
      // de los pacientes.
      for (int j = 0; j < arrCir[i].getCantPx(); j++){
        
        for(int k = 0; k < pacs; k++){
          
          if (arrCir[i].getListaPx(j) == arrPac[k].getIdPx())
            arrPac[k].muestra();
            flagP = true;
        }
      }
    }
  }
    // Notifica al usuario de la falta de pacientes o cirugias.
  if(!flagC){
    cout << "La cirugia no existe.\n";
  }
  if(!flagP && flagC){
    cout << "La cirugia no tiene pacientes.\n";
  }
}

/*
 * La funcion verifica el id del doctor, despues despliega los datos de las cirugias del doctor buscado
 * En caso de que el doctor no exista o el doctor exista pero no tenga cirugias, notifica al usuario.
 * Argumentos: array de objetos cirugia, array de objetos doctor.
 * Retornos: ninguno.
 */      
void consultaPorDoctor(Cirugias arrCir[], Doctor arrDoc[]){
  int idDoctor;
  bool existe=false, hay=false;
  
  // Solicita el id del doctor
  cout<<"Teclea el ID del doctor."<<endl;
  cin>>idDoctor;
  
  // Verifica que el id del doctor existe
  for(int j=0; j<docs;j++){
    if(arrDoc[j].getIdDoctor() == idDoctor){

      existe = true;
      
      // Busca las cirugias del doctor y las presenta en la pantalla
      for(int i=0;i<numCir;i++){
        if(idDoctor == arrCir[i].getIdDoctor()){
          
          hay = true;
          muestraCirugias(arrCir[i]);
        }
      } 
    }
  }
  
  // Notifica si el doctor existe o no y si el mismo tiene cirugias programadas
  if(!existe){
    cout<< "El doctor no existe." << endl;
  }
  if(existe && !hay){
    cout<< "No hay cirugias con este doctor.";
  }
} 

void consultaPorPaciente(Cirugias arrCir[], Pacientes arrPac[]){
  int idPaciente;
  bool existe = false, hay = true;
  
  cout<< "Teclea el ID del paciente." <<endl;
  cin>> idPaciente;
  
  for(int i = 0; i<pacs; i ++){
    if(idPaciente == arrPac[i].getIdPx()){
      existe = true;
      for(int j=0; j<numCir;j++){
        for(int k = 0; k<arrCir[j].getCantPx();k++){
          if(idPaciente == arrCir[j].getListaPx(k)){
            hay = true;
            muestraCirugias(arrCir[j]);
          }
        }   
      }
    }
  }
  
  if(!existe){
    cout<< "No existe el paciente."<<endl;
  }
  
  if(existe && !hay){
    cout<< "El paciente no tiene cirugas."<<endl;
  }
}

int main(){
	Doctor doctores[5];
	Pacientes pacientes[15];
	Cirugias cirugias[10];
	string nombre, apellido, genero, especialidad;
	int id, edad, dia, mes, anio;
	ifstream archEntDoct, archEntPas;
	Fecha fecha;
	char option;
	
	archEntDoct.open("Doctores.txt");
	while(archEntDoct >> id >> nombre >> apellido >> especialidad && docs < 5){
		nombre += " " + apellido;

		doctores[docs].setIdDoctor(id);
		doctores[docs].setNombre(nombre);
		doctores[docs].setEspecialidad(especialidad);

		docs++;
	}
	archEntDoct.close();


	archEntPas.open("Pacientes.txt");
	while(archEntPas >> id >> nombre >> apellido >> genero >> edad && pacs < 15){
		nombre += " " + apellido;

		pacientes[pacs].setIdPx(id);
		pacientes[pacs].setNombre(nombre);
		pacientes[pacs].setGenero(genero);
		pacientes[pacs].setEdad(edad);

		pacs++;
	}
	archEntPas.close();

	do{
		cout << "Teclee el numero de cirugias programadas.\n";
		cin >> numCir;
	}while(numCir < 0 || numCir > 15);

	for (int j = 0; j < numCir; j++){
		cout << "Teclee el id de la " << j + 1 << " cirugia.\n";
		cin >> id;
		cirugias[j].setIdCirugia(id);

		cout << "Teclee el id del doctor que practicara la cirugia.\n";
		cin >> id;
		cirugias[j].setIdDoctor(id);

		cout << "Teclee la duracion de la cirugia.\n";
		cin >> id;
		cirugias[j].setDuracion(id);

		cout << "Teclee el dia seguido del mes y por ultimo el año (separados con un espacio)\n";
		cout << "en el que se practicara la cirugia.\n";
		cin >> dia >> mes >> anio;
		fecha.setDia(dia);
		fecha.setMes(mes);
		fecha.setAnio(anio);
		cirugias[j].setFechaCx(fecha);

		cout << "Teclee una breve descripcion de la cirugia a practicar.\n";
		cin.ignore();
		getline(cin, nombre);
		cirugias[j].setDescripcion(nombre);
	}

	system("cls");
	 // Despliega menú para que el usuario elija una funcion
	do{
	    cout << "Elige una de las siguientes opciones: " << endl;
	    cout << "\t a. Consulta todas las cirugias a realizar.\n";
	    cout << "\t b. Dar de alta un paciente para una cirugia.\n";
	    cout << "\t c. Consulta de cirugia por fecha.\n";
	    cout << "\t d. Consulta por id de la cirugia.\n";
	    cout << "\t e. Consulta de cirugias de un(a) doctor(a).\n";
	    cout << "\t f. Consulta la lista de cirugias que se la han practicado a un paciente.\n";
	    cout << "\t g. Salir.\n";
	    cout << "Opcion: ";
	    cin >> option;
    
	    // Dependiendo de la opción se hace llamado a la funcion necesaria para cada opcion
	    switch(toupper(option)){
			case 'A':
		      	
			    for (int k = 0; k < numCir; k++){
			        muestraCirugias(cirugias[k]);
			    }
			    system("pause");
			    system("cls");
			    break;
		      	
		      	
		    case 'B':
			    altaPaciente(cirugias, pacientes);
			    system("pause");
			    system("cls");
			    break;
		        
		        
		    case 'C':
			    consultaPorFecha(cirugias);
			    system("pause");
			    system("cls");
			    break;
		        
		    case 'D':
		        consultaCirugia(cirugias, pacientes);
		        system("pause");
			    system("cls");
		        break;
		        
		    case 'E':
		        consultaPorDoctor(cirugias, doctores);
		        system("pause");
			    system("cls");
		        break;
		        
		    case 'F':
		        consultaPorPaciente(cirugias, pacientes);
		        system("pause");
			    system("cls");
		        break;
		 
		    case 'G':
		        return 0;
		        
		    default:
		          cout<<"Opcion erronea, vuelva a intentar."<<endl;
		          
		}

	}while (toupper(option) != 'G');
    
  return 0;
}