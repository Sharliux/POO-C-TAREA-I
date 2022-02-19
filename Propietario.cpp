#include "Persona.cpp"
#include <iostream>
using namespace std;

class Propietario : Persona {
	private : string nit;
				double cui;
	//constructor
	public :
		Propietario(string nom, string ape, string dir, string f, string n, int tel, double id) : Persona (nom,ape,dir,f,tel){
			nit = n;
			cui = id;
		}
		//metodos
		//set (modificar)
		void setNit(string n){nit = n;}	
		void setCui(double id){cui = id;}
		void setFn(string f){fn = f;}
		void setNombres(string nom){nombres = nom;}
		void setApellidos(string ape){apellidos = ape;}
		void setDireccion(string dir){direccion = dir;}
		void setTelefono(int tel){telefono = tel;}
			
		//get (mostrar)
		string getNit(){return nit;}
		double getCui(){return cui;}
	  	string getFn(){	return fn;}
		string getNombres(){return nombres;}
		string getApellidos(){return apellidos;}
		string getDireccion(){return direccion;}
		int getTelefono(){return telefono;}
		void mostrar(){
			cout<<"______________________"<<endl;
			cout<<nit<<","<<cui<<","<<fn<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
		}
};

