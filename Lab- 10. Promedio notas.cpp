//EJERCICIO 10
/* Un estudiante universitario está cursando actualmente 6 asignaturas; solicite las notas correspondientes a cada asignatura cursada, calcule el promedio obtenido y
si es mayor que 3.5 diga que ha aprobado el semestre, de lo contrario diga que ha reprobado.*/
#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	float nota, sum=0, prom;
	int asig=1;
	while(asig<=6){
		do{
		cout<<"Ingrese la nota de la asignatura " << asig << ":" ; cin>> nota;
		} while(nota<=0 || nota>5.0);
	sum += nota;
	asig ++;	
	}
	prom=sum/6;
	if(prom>3.5){
		cout<<"\nEl promedio es " << prom << " - Aprobado " ;
	}
	else{
		cout<<"\nEl promedio es " << prom << " - Reprobado " ;	
	}
}

