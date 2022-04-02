//EJERCICIO COMODIN
//NOMINA DE EMPLEADOS

#include<iostream>
using namespace std;
int main(){
	int i=1,  nuevanomina=0, totalnomina=0, totalimpuesto=0 , cantem, sueldo, impuesto, nomina;
	
	cout<<"Ingrese la cantidad de empleados: " ; cin>>cantem;
	
	while(i<=cantem){
		
		cout<<"Ingrese el sueldo del empleado: " ; cin>> sueldo;
		
		nomina=sueldo*4;
		
		if(nomina>800){
			impuesto=nomina*0.06 ;
		}
		else{
				
			if(nomina>700 && nomina<=800){
				impuesto=nomina*0.04 ;
				}
			else{
				impuesto=nomina*0.02;
			    } 
		    }
		
		nuevanomina= nomina-impuesto;
		totalnomina += nuevanomina;
		totalimpuesto += impuesto;
		i++;
	}
	
	cout<< " El total de la nomina es " << totalnomina << endl ;
	cout<< " El total de impuesto es " << totalimpuesto << endl ;
	
	return 0;
}
