#include <iostream>
using namespace std;
class Persona {

	protected : string nombres, apellidos, direccion, fn;
				int telefono;

	protected :	
			Persona (string nom, string ape, string dir, string f, int tel){
				nombres = nom;
				apellidos = ape;
				direccion = dir;
				telefono = tel;
				fn = f;
				
			}	
			
	//metodo
	void mostrar();
};
