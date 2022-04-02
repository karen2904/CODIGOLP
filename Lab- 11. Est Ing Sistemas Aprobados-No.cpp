//EJERCICIO 11 
/* La oficina de Registro y Control Académico de la UPB está procesando las calificaciones del primer corte de los estudiantes de primer semestre de Ingeniería de Sistemas e Informática. Si se sabe que los estudiantes están cursando
actualmente 6 asignaturas; solicite las notas correspondientes a cada asignatura cursada por cada estudiante, calcule el promedio obtenido y si es mayor que 3.5
diga que ha aprobado el corte, de lo contrario diga que ha reprobado. Al finalizar se debe conocer la cantidad de estudiantes aprobados y reprobados.*/

#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	float nota, sum=0, prom, tprom=0, final;
	int asig, cant, i=1, apro=0, noapro=0 , est, num=1; //num cuenta el numero de estudiantes 
	
		cout<<"Ingrese la cantidad de estudiantes: " ; cin>>est;// estudiantes totales
do{
		cout<<"\nEstudiante " << num << endl;
		asig=1;
		tprom=0;
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
		cout<<"\nEl promedio del corte es " << final << " - Aprobado " <<endl;
		apro= apro+1;//cuenta la cantidad de estudiantes que aprobaron
	}
	else{
		cout<<"\nEl promedio del corte es " << final << " - Reprobado " <<endl;	
		noapro+= 1;//cuenta la cantidad de estudiantes que no aprobaron
	}
	num++;
}while(num<=est);

cout<<"\nLos estudiantes que aprobaron el corte fueron: " << apro << endl;
cout<<"Los estudiantes que NO aprobaron el corte fueron: " << noapro << endl;
}
