 /* EJERCICIO 26 . Programa para calcular el perimetro del lote*/
/*

#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_CTYPE,"Spanish");
	
	
	int tip=0 ,i=0, contador=0, h1,h2,a2,a1,b1,b2,h,b,pi=3.14 , p, otro; // el contador cuenta jsjjsks el numero de veces que el usuario se equivoca :(
	
	
	cout<<"Hallar el perimetro del terreno" ; 
	
	do{
    while((tip>2 || tip<1) && contador<3 ){
        cout<<"\nOpción 1: Rectangulo con semicurculo" << "\nOpcion 2: Cuadrado con dos triangulos" ;
		cout<<"\nIngrese el tipo de terreno: " ; cin>>tip;
    	contador = contador + 1;
    }
    if((tip>0)&&(tip<3)){
    	
    	if(tip==1){
    		cout<<"\nIngrese la base del terreno: " ; cin>> b ;
    		cout<<"\nIngrese la altura del terreno: "; cin>> h ;
    		p= (pi*h)+ h + (2*b);
    	}
    	else if(tip==2){
    		cout<<"\nIngrese la hipotenusa 1 del terreno: " ; cin>>h1;
        	cout<<"Ingrese la hipotenusa 2 del terreno: " ; cin>>h2;
    		cout<<"Ingrese la altura 1 del terreno: " ; cin>>a1;
    		cout<<"Ingrese la altura 2  del terreno: " ; cin>>a2;
    		cout<<"Ingrese la base 1 del terreno: " ; cin>>b1;
    		cout<<"Ingrese la base 1 del terreno: " ; cin>>b2;
    		p= h1+h2+a1+a2+b1+b2 ;
    	}
    
    	
    	cout<<"El perimetro del terreno: " << p  ;
    }
    else{
    	cout<< "No  es posible calcular el perimetro del terreno, intente de nuevo";
    	break; 
    }
    
    cout<<"\nSi tiene otro tipo de terreno, digite 1: " ; cin>> otro;
    } while(otro==1);
    cout<<"Los perimetros de los terrenos hallados son: " << contador;
return 0;	
}
*/

#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_CTYPE,"Spanish");
	
	
	int tip=0 ,i=0, contador=0, h1,h2,a2,a1,b1,b2,h,b,pi=3.14 , p, otro; // el contador cuenta jsjjsks el numero de veces que el usuario se equivoca :(
	
	
	cout<<"Hallar el perimetro del terreno" ; 
	
	do{
	    cout<<"\nOpción 1: Rectangulo con semicurculo" << "\nOpcion 2: Cuadrado con dos triangulos" ;
		cout<<"\nIngrese el tipo de terreno: " ; cin>>tip;
    	contador = contador + 1;
    	
    while((tip>=2 || tip<=1) && contador<3 ){
        cout<<"\nOpción 1: Rectangulo con semicurculo" << "\nOpcion 2: Cuadrado con dos triangulos" ;
		cout<<"\nIngrese el tipo de terreno: " ; cin>>tip;
    	contador = contador + 1;
    	}
    if((tip>0)&&(tip<3))
	{
    	
    	if(tip==1){
    		cout<<"\nIngrese la base del terreno: " ; cin>> b ;
    		cout<<"\nIngrese la altura del terreno: "; cin>> h ;
    		p= (pi*h)+ h + (2*b);
    	}
    	else if(tip==2){
    		cout<<"\nIngrese la hipotenusa 1 del terreno: " ; cin>>h1;
        	cout<<"Ingrese la hipotenusa 2 del terreno: " ; cin>>h2;
    		cout<<"Ingrese la altura 1 del terreno: " ; cin>>a1;
    		cout<<"Ingrese la altura 2  del terreno: " ; cin>>a2;
    		cout<<"Ingrese la base 1 del terreno: " ; cin>>b1;
    		cout<<"Ingrese la base 1 del terreno: " ; cin>>b2;
    		p= h1+h2+a1+a2+b1+b2 ;
    	}
    
    	
    	cout<<"El perimetro del terreno: " << p  ;
    }
    else{
    	cout<< "No  es posible calcular el perimetro del terreno, intente de nuevo";
    	break; 
    }
    tip=0;
    contador=0; 
    cout<<"\n Si tiene otro tipo de terreno, digite 1: " ; cin>> otro;
    } while(otro==1);
    cout<<"Los perimetros de los terrenos hallados son: " << contador;
return 0;	
}
