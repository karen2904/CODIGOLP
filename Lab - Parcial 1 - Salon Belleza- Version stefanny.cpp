/* SOCIALIZACION PARCIAL DE STEFANNY LOGICA, EJERCICIO SALON DE BELLEZA */

#include<iostream>
using namespace std;
int main(){
	
	int srv, c, srv_1=8, srv_2=12, precio1= 20000 , precio2=30000, turno1, turno2, cant1=0,cant2=0, vtturno1=0, vtturno2=0, total;
	
	do{
	
	cout<<"Digite la cantidad de servicios que desea \n Digite 1, si desea 1 servicio: " ; cin>> srv ;
	
	if(srv==1){
		cout<<"Ingrese cuantos turnos 1 desea: " ; cin >> turno1 ;
		srv_1 -= turno1 ;
		cant1 += turno1 ;
	}
	else{
		if(srv==2){
			cout<<"Ingrese cuantos turnos 2 desea: " ; cin>>turno2 ;
			srv_2 -= turno2 ;
			cant2+= turno2;
		}
		else{
			if(srv==3){
			cout<<"Ingrese cuantos turnos 1 desea: " ; cin >> turno1;
			cout<<"Ingrese cuantos turnos 2 desea: " ; cin>>turno2 ;
			srv_1 -= turno1 ;
			srv_2 -= turno2 ;
			cant1 += turno1 ;
			cant2+= turno2;
			}
			}
		}
	if(srv_1>0 && srv_2> 0){
		cout<<"Puede seguir, hay mas turnos disponibles, si desea digite 1: " ; cin>> c ;
	}
	else{
		cout<<"No puede serguir, no hay mas turnos disponibles, digite 2 para saber las ventas";
	}
	} while(c==1);
	
	vtturno1=cant1*precio1;
	vtturno2=cant2*precio2;
	total=vtturno1+vtturno2;
	
	cout<<"El total de ventas es " << total << endl;
		
		
	
		return 0;
	}
	

