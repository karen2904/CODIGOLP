//EJERCICIO 4
/*Solicitar a una persona que escriba un n�mero entero, diga cuales son los tres
siguientes n�meros pares enteros sucesivos; a continuaci�n, sume los n�meros
resultantes y su resultado multipl�quelo por el n�mero ingresado. Visualice todos
los resultados.*/
#include<iostream>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_CTYPE,"Spanish");  
	
	int n, m, mult, h;
	
	cout<<"Ingrese un numero: ";
	cin>> n;
	h=n;
	if(n%2!=0){
		n--;}
	for(int i=0;i<3;i++){
		n=n+2;
		m+=n;
		cout<<"El n�mero par es: "<<n<<endl;} 	
	mult=m*h;
	cout<<" \nEl resultado de la suma de los sucesivos pares es " <<m<<endl;
	cout<<"El resultado de la multiplicaci�n es " << mult << endl;
	return 0;
}
