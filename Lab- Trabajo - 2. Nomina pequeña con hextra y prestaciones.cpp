//EJERCICIO 2
/*El propietario de una pequeña empresa quiere conocer el valor a pagar por la nómina de sus 10 empleados, sabiendo que cada uno tiene un sueldo base de $855.000.  Se sabe que por cada 10 horas extras que trabaje el empleado al mes obtendrá un 10% 
 más de bonificación al mes, si el empleado trabaja 20 hora extras al mes obtendrá una bonificación del 15%y si trabaja 32 horas extras  recibirá un 20% de bonificación;se debe tener en cuenta que las prestaciones sociales de los empleados equivalen a un 26% de su salario base.*/

#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE,"Spanish");
	
	int nomina, tnomina=0, i=1,em=1, totalhextra, vlrh,bon,prestaciones, hextra;
	int salario=855000;
	
	cout<<"Programa para hallar la nomina de 10 empleados  " << endl; 
	while(i<=10){
	   	cout<<"\nIngrese las horas extras del empleado " << em << " : " ; cin>>hextra;	
	   	
	   	
	   	if(hextra>=10 || hextra<20){
	   		bon=salario*0.10;
	   	}
	   	if(hextra>=20 || hextra<32){
	   		bon=salario*0.15;
	   	}
	   	if(hextra >=32){
	   		bon=salario*0.20;
	   	}
	   	vlrh= salario/160;//calculando el valor de la hora trabajada
	   	totalhextra=hextra*vlrh;//calculando el valor total a pagar de h extra
	    prestaciones=salario*0.26;
		nomina=(salario-prestaciones) + bon + totalhextra;
		tnomina += nomina; //acumula la nomina de los empleados
		i++; em++;
		}
		
	
	cout<<"La nomina de los empleados es: " << nomina << endl;
	
	return 0;
} 
