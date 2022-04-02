#include<iostream>
using namespace std;
int main(){
	int TB50=0;
	int TB20=0;
	int TB10=0;
	int otro=1; 
	int vlr=0;
	int B50; int B20; int B10;
	
while (otro==1){
    int  cntDg=0;
    int vlr=0;
    cout<<"Ingrese el valor deseado:";
     cin>>vlr;
while ((cntDg<2) && (vlr<10)||(vlr>400)||(vlr%10!=0)){
 cntDg++;
 cout<<"\nIngrese el valor de nuevo deseado:";
 cin>>vlr;
 
}
//calcular cuando puede
if ((vlr>=10) && (vlr<=400) && (vlr %10==0)) {

B50=vlr/50; TB50+=B50;
B20=(vlr%50)/20; TB20+=B20;
B10=((vlr%50)%20)/10;TB10+=B10;
cout<<"\nLos billetes de 50 son "<<TB50<<"\nLos billetes de 20 son "<<TB20<<"\nLos billetes de 10 son "<<TB10<<endl;
}
else{
	cout<<"\n No sabe usarlo";
}
cout<<"\ningrese 1 si quiere otro " <<endl;
cin>>otro;

}
cout<<"\nEl total de billetes de 50 son "<<TB50<<"\nEl total de billetes de 20 son "<<TB20<<"\nEl total de billetes de 10 son"<<TB10<<endl;
}
