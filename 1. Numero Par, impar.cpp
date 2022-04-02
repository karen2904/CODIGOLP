/*EJERCICIO 1
PROGRAMA PARA CALCULAR NUMEROS PRIMOS
*/
// no esta terminado
#include<iostream>
#include<math.h>

using namespace std;
int main(){
	int numero, cp=0, ci=0 , co=0; //cp es contador par ;
	int otro; 
	
	do{
	cout<<"Ingrese un numero: " ; cin>> numero ;
	
    if(numero !=0)	{
    	if(numero % 2 == 0){
    		cp=cp+1;
    		cout<<"\nEl numero es par" ;
    	}
    	else{
    	ci=ci+1;
    	cout<<" \nEl numero es impar" ;
    	}
    }
	else{
		cout<<"\nEl numero es cero"<<endl ;
		co=co+1;
	}
	cout<<"\nSi desea ingresar otro numero digite 1:  " << otro << endl;	
	} while(otro==1);
	
	cout<<"Ha ingresado " << cp << " numeros pares " << endl ;
	cout<<"Ha ingresado " << ci << " numeros impares " << endl ;
	cout<<"Ha ingresado " << co << " ceros " << endl ;	
	
	return 0;
}
