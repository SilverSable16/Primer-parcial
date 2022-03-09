#include "Alumno.cpp"
#include <iostream>
using namespace std;
main(){
	string codi, nombres, apellidos, curso;
	string mensaje="";
	int nota1, nota2, nota3, nota4, c, n,promedio;
	cout << "Ingrese cantidad de alumnos a calificar: ";
	cin>>n;
	while(c<n){
	cout<<" ";
	cout<<"Ingresar Codigo: ";
	cin>>codi;
	cout<<"Ingresar Nombres: ";
	cin>>nombres;
	cout<<"Ingresar Apellidos: ";
	cin>>apellidos;
	cout<<"Ingresar Curso: ";
	cin>>curso;
	cout<<"Ingresar Nota #1: ";
	cin>>nota1;
	cout<<"Ingresar Nota #2: ";
	cin>>nota2;
	cout<<"Ingresar Nota #3: ";
	cin>>nota3;
	cout<<"Ingresar Nota #4: ";
	cin>>nota4;
	promedio = (nota1+nota2+nota3+nota4)/4;
	mensaje = promedio >60 ?"Aprabado" : "Reprobado";
	cout<<"El Promedio es: "<<promedio<<" Por lo tanto esta "<<mensaje<<endl;
	c=c+1;
	Alumno obj = Alumno(codi,nombres,apellidos,curso,nota1,nota2,nota3,nota4);
	obj.mostrar();
	system("PAUSE");
	cout<<" "<<endl;

	}

}
	
