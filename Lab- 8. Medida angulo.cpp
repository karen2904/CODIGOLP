//EJERCICIO 8
/* Basados en la teoria de angulos; solicite la medida de un angulo: a. si este es menor de 90 grados diga cual es su complemento
b. Si es mayor de 90 y menor de 180 diga cual es su suplemento
Angulos Complementarios: dos o mas angulos son complementarios, si al
sumar sus medidas dan como resultado 90..
Angulos Suplementarios: dos o mas angulos son suplementarios, si al sumar
sus medidas dan como resultado 180.*/

#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	int A, C, S, otro;
	cout<<"Teoria de angulos" ;

    do{
	cout<<"\nIngrese la medida de un angulo: " ; cin>>A;
	while(A<=0){
			cout<<"No es posible, Intente de nuevo, Ingrese la medida de un angulo: " ; cin>>A;
	}
	if(A<90){
		C=90-A;
		cout<<"El angulo complementario de "<<A<< " es  " << C <<endl;
	}
	else{
		if(A==90){
			cout<<"El angulo no puede ser 90" ;
		}
		else{
			if(A>90 && A <180){
				S= 180-A;
				cout<<"El suplementario de " << A << " es "<< S << endl;
			}
			else{
				cout<<"El angulo no puede ser" ;
			}
		}
	}
		cout<<"\nSi desea ingresar otro angulo, digite 1: " ; cin>>otro;
    } while(otro==1);
}

