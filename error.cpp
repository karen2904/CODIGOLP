#include<iostream>
#include<conio.h>

using namespace std;
int main(){
	
	int total=0, n1=0, n2=0, cant1,cant2, precio1, precio2,s,t1,otro, n3, des,Tdes;
	
	cout<<"Ingrese la cantidad de turnos 1 disponibles: " ; cin >>cant1 ;
	cout<<"Ingrese el precio de turno 1: " ; cin >>precio1;
	cout<<"\nIngrese la cantidad de turnos 2 disponibles: " ; cin>>cant2;
	cout<<"Ingrese el precio de turno 2: " ; cin>>precio2 ;

do{
	cout<<"\nSi desea un servicio digite 1: " ; cin >> s ;
	if(s==1){
		cout<< " Decida si quiere el turno 1, digite 1: " ; cin>> t1 ;
		
		if(t1==1){
			
			if(n1<=cant1){
				n1=n1+1 ;
			}
			else {
			cout<<"Ha sobrepasado el limite de turnos establecidos" ;
			}
		}
		else{
			if(n2<=cant2){
					n2=n2+1;
			}
			else {
			cout<<"Ha sobrepasado el limite de turnos establecidos" ;
			}
		}	
	}
	
	else{
		if(n1<=cant1 && n2<= cant2 ){
				n1=n1+1 ;
				n2=n2+1;	
				n3=n3+1;
				des=des+1;	
		}
		else{
			cout<<"Ha sobrepasado el limite de turnos establecidos" ;	
		}
	}
	cout<<"\nSi tiene mas clientes, digite 1: " ; cin>>otro; 
}while(otro==1);
//operaciones
Tdes= (((precio1 + precio2)*n3)* 0.08);
total=(precio1*n1) + (precio2*n2) - Tdes;

//salidaa
cout<<"Los boletos para el turno 1 fueron " << n1 << endl ;
cout<<"Los boletos para el turno 2 fueron " << n2 << endl ;
cout<<"Los boletos para ambos turnos fueron " << n3 << endl ;
cout<<"El numero de descuentos fue " <<des << endl;
cout<<"El total de descuentos fue " <<Tdes << endl;
cout<<"El total de ventas es " << total << endl;

	//getch();
	return 0 ;
}
