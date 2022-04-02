#include <iostream>

using namespace std;

int main ()
{
	int n1, n2 ; 
	float suma=0 , resta= 0 ;
	float division= 0 , multiplicacion= 0 ;

cout << "Digite un nummero: " ; 
cin >> n1 ;

cout<< "Digite otro numero: " ;
cin>> n2 ;

suma= n1+n2 ;
resta =n1-n2 ;
multiplicacion=n1*n2 ;
division=n1/n2 ;


cout<< "La suma es : " <<suma << endl ;
cout << "La resta es:  " << resta << endl;
cout << "La multiplicacion es : " <<multiplicacion<<endl ;
cout << "La division es : " <<division <<endl ;


return 0 ;



}
