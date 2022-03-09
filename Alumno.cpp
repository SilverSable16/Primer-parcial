#include "Persona.cpp"
#include <iostream>
using namespace std;

class Alumno : Persona{
	private : string codigo, codi;
	public :
	Alumno (){
	}
	Alumno(string nom, string ape, string cur, string codi, int not1, int not2, int not3, int not4) : Persona(nom,ape,cur,not1,not2,not3,not4){
		codigo = codi;

	}
	void setCodigo(string codi){codigo=codi;}
	void setNombres(string nom){nombres=nom;}
	void setApellidos(string ape){ apellidos=ape;}
	void setCurso(string cur){ curso=cur;}
	void setNota1(int not1){ nota1=not1;}
	void setNota2(int not2){ nota2=not2;}
	void setNota3(int not3){ nota3=not3;}
	void setNota4(int not4){ nota4=not4;}
	

	string getCodigo(){return codi;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getCurso(){return curso;}
	int getNota1(){return nota1;}
	int getNota2(){return nota2;}
	int getNota3(){return nota3;}
	int getNota4(){return nota4;}

	
	
	//metodos
	void mostrar(){
		cout <<"_____________________________" << endl;
		cout <<codigo<<"," << nombres <<"," << apellidos << "," << curso << endl;
		cout << "Nota #1 : "<< nota1 <<endl;
		cout << "Nota #2 : "<< nota2 <<endl;
		cout << "Nota #3 : "<< nota3 <<endl;
		cout << "Nota #4 : "<< nota4 <<endl;
	}
};
