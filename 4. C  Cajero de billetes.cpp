/* construir un programa que permita determinar la cantidad de billete de $50, $20, $10 que debe entregar 
un cajero electronico a partir del valor a retirar.

El programa debe verificar que el usuario asigne un valor a retirar permitido y debe operar mientras
el usuario lo disponga asignando un 1 

Asuma que : Siempre tiene saldo suficiente, ingresa la tarjeta al cajero adecuado y contraseña adecuada, siempre
 hay dinero en el cajero
*/
// FORMA CON DOS WHILE

#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;


int main(){
	
	//se declaran las variables a utilizar
	int B20,B50,B10; //vlr es valor
	int vlr;
	int otro;
	otro=0 ;
			 
	
	do{
		
        cout<<"Digite un valor a retirar: " ; cin>> vlr ;

		while(vlr<10 || vlr>400 || vlr %10 != 0){
		
            cout<<"El valor que digitó sobrepasa el límite establecido, por favor digite un nuevo valor a retirar: " ; cin>> vlr ;

        }
        
       	B50= ("%d",vlr/50);
		B20= ("%d",vlr%50/20);
		B10= ("%d",((vlr%50)%20)/10 );
        
        cout<<"\nSu cambio en billetes de $50 es " <<B50 <<endl ;
	    cout<<"\nSu cambio en billetes de $20 es " <<B20 <<endl ;
	    cout<<"\nSu cambio en billetes de $10 es " <<B10 <<endl ;
		
  	    cout<< "Si desea ingresar otro valor, digite  "<< endl << "1. Sí. " << "2. No. " << endl;
        cin >> otro;
	
	}while (otro==1);
    
	return 0;

