/* PROGRAMA PARA SACAR LA NOMINA DE UNA EMPRESA
LINK DE REQUERIMIENTOS : https://docs.google.com/document/d/141-ZJFuxwBhlk2vXylh5-R-QJF4ELah8UVGCX3rpYaU/edit?usp=sharing 

40 H SEMANLES = 160 HORAS MENSUALES
32 HORAS MENSUALES SON EL 20% DEL TOTAL LEGAL mensual*/

#include<iostream>
#include<conio.h>
#include<locale.h>

using namespace std;
int main(){
	setlocale(LC_CTYPE,"Spanish");//permite tildes :)
	
	int cantt, erango,sueldo,hextra,hnd,hdi,phdi,phnd,vlrh,pextra;/*erango=empleadosxrango, 
	hnd=hora nocturna0dominical extra, hdi= hdiurna extra , phdi=pagohorasdiurnas, phnd=pagohorasnocturnas*/
	int sumarango=0, sumextra=0, rango=0, sumem=0; //sumahex = suma de las horas extras , sumem=sumadeempleados
	int pretaciones, hextrae,nomina,nmrango, nmprestaciones,prestaciones,  pextrat,nempleado=1, hxempleado=0,rangopagoextra=0, Tphdi=0, Tphnd=0;
	
	cout<<"PROGRAMA PARA EMPRESA DE NOMINA" ;
	cout<<"\nIngrese la cantidad de empleados en la empresa: " ; cin>>cantt ;
	
	do{
           hextrae=0;
		   nmrango=0;
		   pextra=0;
		
			rango=rango+1;
			cout<<"\nIngrese la cantidad de empleados por rango " << rango << " :  " ; cin>> erango;
			
			if(cantt<erango){
					cout<<"Ha sobrepasado el limite de empleados, intente de nuevo, \n Ingrese la cantidad de empleados por rango " << rango << " :  " ; cin>> erango;
			}
			sumem=sumem+erango; 
			
			cout<<"Ingrese el valor del sueldo del rango " << rango << " :  " ; cin>>sueldo;
			
		    while(nempleado<=erango){
		
		    cout<<"\nIngrese cuantas horas extra trabajo el empleado " << nempleado << ": " ; cin >> hextra;
		    
			while(hextra>32){
				cout<<"Ha sobrepasado el limite de horas extras permitidas, intente de nuevo, \n Ingrese las horas extras que el empleado " << nempleado << " trabajo: " ; cin>>hextra;	
            }
            cout<<"Ingrese la cantidad de horas extras diurnas: " ; cin>>hdi; 

			while(hdi>hextra){
				cout<<"Ha sobrepasado el limite de horas extras diurnas permitidas, intente de nuevo, \n Ingrese las horas extras diurnas:  "; cin>> hdi; 
			}
			hnd= hextra - hdi ;
			hextrae= 	hextrae + hextra ;
			cout<< "La cantidad de horas extras nocturnas o dominicales son "<< hnd << endl; 
			nempleado ++; // numero de empleados en aumento +1 para llegar a los empleados del rango
			vlrh= sueldo/ 160 ; //se divide en 160 porque son las horas normalmente trabajadas
		    phdi= hdi* vlrh ; //pdhi es pago de horas diurnas extras
		    Tphdi += phdi ;//acumula
		    phnd= hnd*(vlrh* 2)  ; //phnd es el pago de horas nocturnas o dominicales extras, esas valen el doble del valor de la hora
		    Tphnd += phnd ;//acumula
		    //pago de horas extras en este rango
		    pextra= Tphdi + Tphnd; // se establece el pago extra del pago de extra diurno y nocturno
		    cout<<"\nEl pago de horas extras en el rango "<< rango << " es " << pextra <<endl;
		    pextrat = pextrat + pextra ; // pago de horas extra total
		     //para que cuente empleados desde el numero 1
		    sumem= sumem+erango ;
		    cout<< " PAGO EXTRA " << pextra ;
            }
         
		    
		    if(sumem> cantt){
		    cout<<"Todos los empleados ya tienen un rango, ha sobrepasado el limite, intente de nuevo " ;
		    }
		
	    
			prestaciones=(sueldo*0.26)*sumem; //prestaciones sociales
			nmrango= ((sueldo+pextra)*sumem ) - prestaciones  ; //nomina por cada rango
			nmprestaciones += prestaciones ; //nomina de prestaciones totales
		    nomina += nmrango;  //nomina total
		   
		     //suma de empleados para que no sobrepase la cantidad inicial
		    
		    cout<<"\nLa cantidad de horas extras laboradas en el rango " << rango << " salarial es " << hextrae <<endl;
		    cout<<"\nEl Valor pagado por horas extras en el rango " << rango << " salarial es " << pextra <<endl;
		    cout<<"\nEl valor de la nomina del rango " << rango << " salarial es " << nmrango <<endl;
			
	} while(rango<5);
	
/*	if(cantt != sumem){ //para que todos los empleados tengan un rango
		cout<<"Faltan empleados por asignar en un rango, no ha lllegado a los empleados totales, intente de nuevo ";
	} */
	
	cout<<"El valor total de la nomina es " << nomina <<endl;
	cout<<"Valor total pagado por prestaciones sociales es  " << nmprestaciones <<endl;
	cout<<"Valor total de horas extras pagadas a todos los empleados es " << pextrat <<endl;
	
	getch();
	return 0;	
	}
	


