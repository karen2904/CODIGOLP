//EJERCICIO 3
/*Ungrupo de jóvenesemprendedores sale de compras para prepararse a la realización de la presentación de su propuesta de negocio y al llegar a su casa cada uno quiere calcular el valor total invertidoen su atuendo, si se sabe que cada uno compró cuatrocamisas, trespantalones, dospares de zapatos, una chaquetay 4 libros 
(Programación, Innovación, Emprendimiento y Lógica de Programación).Tenga presente que cada artículo tiene un valor diferente.*/

#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE ,"Spanish");
	int total=0, i=1, jov,chaq,cam,tcam,pant,tpant,pza,tpza,libro1,libro2, libro3, libro4,tlibros, suma;
	
	cout<<"Ingrese el numero de jovenes: " ; cin>> jov;
	
	while(i<=jov){
		//se le piden al usuario los datos del producto
		cout<<"\nIngrese el valor de las camisas: " ; cin>>cam ;//camisas
		cout<<"Ingrese el valor de los pantalones: " ; cin>>pant ;//pantalones
		cout<<"Ingrese el valor del par de zapatos: " ; cin>>pza ;//par de zapatos
		cout<<"Ingrese el valor de la chaqueta: " ; cin>>chaq ;
		cout<<"Ingrese el valor del libro de Programación: " ; cin>>libro1 ;
		cout<<"Ingrese el valor del libro de Innovación: " ; cin>>libro2 ;
		cout<<"Ingrese el valor del libro de Emprendimiento: " ; cin>> libro3;
		cout<<"Ingrese el valor del libro de Logica de Pogramación: " ; cin>> libro4;
		
		//operaciones del atuendo y compras
		tcam=cam*4; 
		tpant= pant*3;
		tpza=pza*2;
		tlibros=libro1+libro2+libro3+libro4;
		
		suma=tlibros + tpza + tpant +tcam + chaq; 	//se suma todo para un total por persona
		total=total+suma; //total de gastos del grupo de jovenes, acumulador
		
		cout<<"El total invertido en el atuendo fue " << suma << endl;
		i++;
			
	}
	cout<<"\nTodos gastaron en total " << total <<endl;
}


