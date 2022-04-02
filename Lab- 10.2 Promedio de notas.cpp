//EJERCICIO 10 VERSIÓN 2.0
/* Un estudiante universitario está cursando actualmente 6 asignaturas; solicite las notas correspondientes a cada asignatura cursada, calcule el promedio obtenido y
si es mayor que 3.5 diga que ha aprobado el semestre, de lo contrario diga que ha reprobado.*/
#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	float nota, sum=0, prom, tprom=0, final;
	int asig=1, cant, i=1;
	
	do{
		sum=0; i=1;
	    cout<<endl;
		cout<<asig;
		cout<<"\nIngrese la cantidad de notas de la asignatira " << asig << " : " ; cin>>cant;
		while(cant<=0 ){
			cout<<"No es posible, Ingrese la cantidad de notas de la asignatira " << asig << " : " ; cin>>cant;
     	}
     	do{
     		cout<<"Ingrese la nota: " ; cin>> nota;
     		while(nota>5.0 || nota<=0){
     			cout<<"No es posible, Ingrese la nota: " ; cin>> nota;
     		}
     		sum+=nota;
     		i++;
     	}while(i<=cant);// cuanto se pregunten el total de notas de la asignatura se acaba	
     	prom=sum/cant;//hallando el promedio de la asignatura
     	tprom+=prom;//para sumar promedios y hallar el final
     	  if(prom<=3.5){
	     	cout<<"\nEl promedio de la asignatura " <<asig << " es: " << prom<< " - Pierde la asignatura " <<endl;
	         }
	      else{
	     	cout<<"\nEl promedio de la asignatura " <<asig << " es: " << prom<< " - Aprueba la asignatura " <<endl;	
   	       }
   	    asig++;   
	} while(asig<=6);
	
	final=tprom/6;
	cout<<endl;
	if(final>3.5){
		cout<<"\nEl promedio del semestre es " << final << " - Aprobado " ;
	}
	else{
		cout<<"\nEl promedio del semestre es " << final << " - Reprobado " ;	
	}
}
