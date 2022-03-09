#include <iostream>
using namespace std;
class Persona{
	protected :  string nombres, apellidos, curso;
				int nota1, nota2, nota3, nota4;
	protected : 
			Persona(){
			}
			Persona(string nom, string ape, string cur, int not1, int not2, int not3, int not4){
				nombres = nom;
				apellidos = ape;
				curso = cur;
				nota1 = not1;
				nota2 = not2;
				nota3 = not3;
				nota4 = not4;
			}
			
			
	// metodo
	void mostrar();
	
};
