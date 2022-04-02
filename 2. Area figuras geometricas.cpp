/* Programa para hallar el area de figuras geometricas (triangulo, rectangulo, circulo)
*/

#include<iostream>

using namespace std;

int main(){

//datos de entrada
float at,ac,ar, bt, ht, br, hr,r ;
float pi=3.1416 ;

//pidiendo los datos al usuario
cout<<"Halla el area de las siguientes figuras geometricas " ;

cout<<"\nDigite las medidas del triangualo" ; 
cout<<"\nIngrese la base del triangulo: " ; cin>>bt ;
cout<<"Ingrese la altura del triangulo: " ; cin>>ht ;

cout<<"\nDigite las medidas del rectangulo" ; 
cout<<"\nIngrese la base del rectangulo: " ; cin>>br ;
cout<<"Ingrese la altura del rectangulo: " ; cin>>hr ;

cout<<"\nDigite las medidas del circulo" ; 
cout<<"\nIngrese el radio del circulo: " ; cin>> r ;


//variables de proceso
at= (bt*ht)/2 ;
ar= (br*hr);
ac= pi * r * r ;

//salida de datos
cout<<"\nEl area del triangulo es: " << at << endl;
cout<<"El area del rectangulo es: " << ar << endl;
cout<<"El area del circulo es: " << ac << endl;

return 0;
}

