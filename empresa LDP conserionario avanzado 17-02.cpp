/* PROGRAMA DE EMPRESA DE TRANSPORTE USANDO DO WHILE
	Se cambia el i y el j por 1 inicial, tomando i<6 y j<6
*/

#include<iostream>

using namespace std;

int main()
{
	int year=2000, i=1, sumacomb=0, sumamant=0, sumallnt=0;
	int modelo , llantas= 4;
	float vgasolina , vdiesel ; 
	int diast=301, meses=12 , semanas=43 ;
	int Numc[5] , cgas[5], cdiesel[5],  comsem[5] , mantmen[5] , llantasmod[5];
	int combanualmod[5], mantanualmod[5], rubrototal,llantanualmod[5], totalLDP=0 ;
	
	
	
	cout<<"Programa de empresa de transporte \n " ;
	cout<<"Defina el costo de la gasolina: " ; 
	cin>>vgasolina;
	cout<<"Defina el costo del diesel: " ;
	cin>>vdiesel;
	
	do{
	
	cout<<"\nDigite la cantidad de camionetas del  modelo "<<year<<" = "; // se corre el igual :)
    cin>>Numc[i]; 
	cout<<"Digite cuantas camionetas del modelo " <<year << " usan gasolina: " ; 
	cin>>cgas[i];
	cdiesel[i]= Numc[i] - cgas[i] ;
	cout<<"Las camionetas que usan diesel son: " <<cdiesel[i]<<endl;
    year=year + 5 ;
    i++;
	}
	while ( i < 6);
	
	year=2000;
	i=1;
	do{
	
	cout<<"\nDigite el consumo de combustible semanal del modelo " <<year<< " = ";
	cin>>comsem[i];
	i++;
	year=year+5;
   }
   while(i<6);
	
	i=1;
	year=2000;
	do{
	
	cout<<"\nDigite el valor mensual del mantenimiento del modelo " <<year<< " = "; 
	cin>>mantmen[i];
	i++;
	year=year+5;
   }
   while(i<6);
   
   year=2000;
   i=1;  
   do{
   
	cout<<"\nDigite el valor del juego de llantas del modelo " <<year<< " = " ; 
	cin>>llantasmod[i];
	i++;
	year=year+5;
   }
   while(i<6);
  
	
	// variables de proceso
	year=2000;
	i=1;
	do{
		combanualmod[i]= Numc[i] *( vgasolina * cgas[i]) + ( vdiesel * cdiesel[i]) * comsem[i] * semanas ;
		cout<<Numc[i]<<" - "<<vgasolina<<" - "<<cgas[i]<<" - "<<vdiesel<<" - "<<cdiesel[i]<<" - "<<comsem[i]<<" - "<<semanas;
		cout<<"El costo total de combustible anual del modelo de camioneta " <<year<< " es: "<<combanualmod[i]<<endl ;
		i++;
		year=year+5;
	}
	while	(i< 6);
	
	year=2000;
	i=1;
	
   do{
    mantanualmod[i]= mantmen[i]*meses*Numc[i];
	cout<<"El costo total anual de mantenimiento del modelo de camioneta " <<year<< " es : " <<mantanualmod[i] <<endl ;
	i++;
	year=year+5;
	}	while	(i<5);
	
	i=1;
	year=2000;
	do{
	
	llantanualmod[i]= llantasmod[i]* Numc[i] * llantas ;
	cout<<"El costo total de gasto de llantas del modelo de camioneta " <<year<< " es  : " <<llantanualmod[i]<<endl ;
	i++;
	year=year+5;
    } while (i<6) ;

   i=1;
   year=2000;

    for(int j=1;j<6;j++){
		sumacomb=sumacomb+combanualmod[i];
		sumamant=sumamant+ mantanualmod[i] ;
		sumallnt= sumallnt + llantanualmod[i] ;
	}
	cout<<"El costo total que genera cada rubro en el total de camionetas es "<<endl; // (combustible, mantenimiento y llantas)
    cout<<"\nEl costo total del combustible de todos los modelos es: "<<sumacomb<<endl; 
	cout<<"\nEl costo total del combustible de todos los modelos es: "<<sumamant<<endl; 
	cout<<"\nEl costo total del combustible de todos los modelos es: "<<sumallnt<<endl; 
	
	
	
	for(int j=1;j<6;j++){
		totalLDP=totalLDP+llantanualmod[j]+mantanualmod[j]+combanualmod[j];
	}
    cout<<"El total de los costos generados por el parque automotor de la transportadora LDP es: "<<totalLDP<<endl;



  cout<<"Final del programa, vuelva pronto"<< endl;
	 
	return 0 ;

}
