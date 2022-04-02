// programa para calcular 
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int num;
	int contp=0;

	do{
		cout<<"Ingrese un numero: ";cin>>num;
		if(num%2==0){
		contp=contp+1;
		}	
	
	}while(num!=0);

	cout<<"Numero total de pares: "<<contp<<endl;
	
	
	return 0;
}
