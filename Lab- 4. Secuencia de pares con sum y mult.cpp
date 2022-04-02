//EJERCICIO 4
/*Solicitar a una persona que escriba un número entero, diga cuales son los tres
siguientes números pares enteros sucesivos; a continuación, sume los números
resultantes y su resultado multiplíquelo por el número ingresado. Visualice todos
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
		cout<<"El número par es: "<<n<<endl;} 	
	mult=m*h;
	cout<<" \nEl resultado de la suma de los sucesivos pares es " <<m<<endl;
	cout<<"El resultado de la multiplicación es " << mult << endl;
	return 0;
}
