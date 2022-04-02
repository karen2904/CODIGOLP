// calificaciones parciales
//MIRAR LA VARIABLE N, TERMINAR
#include <iostream>
using namespace std;
int main(){
	int c,s=0,b=0,r=0,ot=0, N; //s-sobresaliente, b-bueno, r-regular, ot-otro talento
	N=0;
	cout<< " Digite el numero de estudiantes: " ; cin>> c; 
	
	for(int i=0; i<c; i++){
		
		do{
			cout<<"Ingrese la nota del estudiante: " ; cin >> N;
		}while(N<0 || N>5);
		
		switch(N){
			case (1): ot=ot+1; break;
			case (2): ot=ot+1; break;
			case (3): r=r+1; break;
			case (4): b=b+1; break;
			case (5): s= s+1; break;
		}
	}
	
	cout<<"Los estudiantes sobresalientes son " << s << endl;
	cout<<"Los estudiantes buenos son  " << b << endl;
	cout<<"Los estudiantes regulares son " << r << endl;
	cout<<"Los estudiantes bajos son " << ot << endl;
	
	
	
}

