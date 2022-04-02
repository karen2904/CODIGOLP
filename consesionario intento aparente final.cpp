/* empresa de transporte  dias trabajados=260 dias, 12meses , c/G gasolina=10.000 y  hallar el costo de combustible y mantenimiento x modelo x años, ademas del costo total 
*/
#include <iostream>

using namespace std;

int main()
{
	int mc2010, mc2015, mc2020, mc2022 , gt, combd, combt, mantm ;
	int vg=10000 ; //variables del problema
	int dt=260 ;
	int meses=12 ;
	int vcomb2010, vcomb2015, vcomb2020, vcomb2022; //valor del combustible por modelo
	int mant2010= 1500000 ;
	int mant2015= 1100000 ;
	int mant2020=400000  ;
	int mant2022= 300000  ;
	int manta2010 ,  manta2015, manta2020, manta2022, mantt ;// manta =mantenimiento anual y mantt = mant total
	int comb2020=7 , comb2010=12 , comb2015=10, comb2022=6; // combustible por modelo
	
	
	//inicio del programa
	cout<<"Programa para una empresa de transporte"<<endl ;
	
	//requisito del usuario
	cout<<" Ingrese el numero de camionetas 2010: "; 
	cin>>mc2010 ;
	
	cout<<" Ingrese el numero de camionetas 2015: "; 
	cin>>mc2015 ;
	
	cout<<" Ingrese el numero de camionetas 2020: "; 
	cin>>mc2020 ;
	
	cout<<" Ingrese el numero de camionetas 2022: "; 
	cin>>mc2022 ;
	
	//variables de proceso
	
	vcomb2010= mc2010*dt*vg* comb2010 ;
	vcomb2015= mc2015*dt*vg* comb2015 ;
	vcomb2020= mc2020*dt*vg* comb2020 ;
	vcomb2022= mc2022*dt*vg* comb2022 ;
   //se aplican las variables de proceso
	cout << "Gasto al anual de combustible del modelo 2010: " <<vcomb2010<< endl ;	
	
	cout << "Gasto al anual de combustible del modelo 2015: " <<vcomb2015<< endl ;
	
	cout << "Gasto al anual de combustible del modelo 2020: " <<vcomb2020<< endl ;
	
	cout << "Gasto al anual de combustible del modelo 2022: " <<vcomb2022<< endl ;	
	
	manta2010= mant2010 * meses * mc2010;
	manta2015=mant2015 * meses * mc2015 ;
	manta2020=mant2020 *meses * mc2020 ;
	manta2022= mant2022 * meses * mc2022 ;
	
	
	cout << "Gasto anual del mantenimiento del modelo 2010: " <<manta2010<< endl ;
	cout << "Gasto anual del mantenimiento del modelo 2015: " <<manta2015<< endl ;
	cout << "Gasto anual del mantenimiento del modelo 2020: " <<manta2020<< endl ;
	cout << "Gasto anual del mantenimiento del modelo 2022: " <<manta2022<< endl ;
	
	combt= vcomb2010 + vcomb2015 + vcomb2020 + vcomb2022 ;
	mantt= manta2010 + manta2015 + manta2020 + manta2022 ;
	
	cout << "Gasto al anual de combustible de todos los modelos: " <<combt<< endl ;	
	cout << "Gasto al anual del mantenimiento de todos los modelos: " <<mantt<< endl ;
	
	gt= combt + mantt ;
	
	cout << " Gasto total:   " <<gt << endl ;
	
    return 0;
	
}
