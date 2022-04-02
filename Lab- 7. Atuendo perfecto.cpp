//EJERCICIO 7
/* Si una corbata cuesta una sexta parte de lo que cuesta un traje, un cinturón cuesta una quinta parte del mismo traje, los zapatos la mitad del valor del traje y la
camisa dos tercios del valor de zapatos. Elabore un programa que le permita al usuario armar su atuendo perfecto, con solo pedirle el valor de una de las prendas
de vestir y las prendas que va a llevar.*/
#include<iostream>
#include<locale.h>
#include<cmath>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	int traje, corbata, cinturon, zapatos, camisas, total, otro, atuendo;
	int tt=0, tca=0, tci=0, tco=0, tza=0;
	
	cout<<"Elegir su atuedo perfecto" ;
	cout<<"\nIngrese el valor del traje: " ; cin>>traje;
	
	do{	
		cout<<"\nOpciones del atuendo. \n1. Traje \n2. Corbata \n3.Cinturón \n4.Zapatos \n5. Camisas \nDigite la opción lo que quiera comprar: " ; cin>>atuendo;
		switch(atuendo){
			//se ponene acumuladores por si la persona quiere llevar más de un tipo de prenda, acumula su resultado
			case 1: traje=traje; tt=tt+traje;break;
			case 2: corbata=traje/6 ; tco=tco+corbata; break;
			case 3: cinturon=traje/5 ; tci=tci+cinturon; break;
			case 4: zapatos=traje/2 ; tza=tza+ zapatos; break;
			case 5: camisas=2*(traje/2)/3 ; tca=tca+camisas; break;
			default: cout<<"Debe elegir una de las opciones disponibles, intente de nuevo " <<endl;
		}
		cout<<"Si desea elegir algo más, digite 1 " ; cin>>otro;
	}while(otro==1);
	total= tt + tca + tci +  tco + tza ;
	cout<<"\nEl total de su atuendo es " <<total<<endl;
}
