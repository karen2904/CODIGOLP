// EJERCICIO 1 
/*Una persona quiere conocer cuanto es el dinero que tendr� disponible de su remuneraci�n salarial,
si el d�a que recibe su pagasale ahacer las compras de los v�veres y pagar los servicios p�blicos (agua, luz, gas e internet). */

#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE,"Spanish");
	int salario, wifi,viveres,luz,gas,agua,gastos, dispo;
	
	cout<<"Ingrese su salario: " ; cin>>salario;
	
	cout<<"\nA continuaci�n, ingrese sus pagos a realizar" ;
	cout<<"\nIngrese su pago de gas: " ; cin>> gas;
	cout<<"Ingrese su pago de agua: " ; cin>> agua;
	cout<<"Ingrese su pago de luz: " ; cin>> luz;
	cout<<"Ingrese su pago de internet: " ; cin>> wifi;
	cout<<"Ingrese su pago en compras de viveres: " ; cin>> viveres;
	
	gastos= luz + agua + viveres + wifi + gas;
	
	if(gastos>salario){
		cout<<"La persona excedi� el dinero disponible, ha adquirido deudas, no tiene dinero disponible. " ;
	}
	else{
		dispo=salario-gastos;
		
		cout<<"\nEl dinero disponibles es " << dispo ;
	}	
   return 0;
   
}
