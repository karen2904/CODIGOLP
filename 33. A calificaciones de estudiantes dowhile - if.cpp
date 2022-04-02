#include<iostream>
using namespace std;
int main(){
	int s,b,r,ot,n,c,i=0;
	cout<<" Ingrese el numero de estudiantes: " ; cin>>c;
	s=0, b=0, r=0, ot=0;
	do{
	do{
	cout<<"Digite la nota del estudiante: " ; cin>> n;
	
    } while(n<0 || n>5);
    if(n>4){
    	s += 1; 
    }
    else{
    	if(n>3){
    		b +=1;
    	}
    	else{
    		if(n>2){
    			r += 1;
    		}
    		else{
    			ot +=1;
    		}
    	}
    }
    i ++ ;
    
    } while(i<c);
    
    cout<<"Los estudiantes sobresalientes son " << s << endl;
    cout<<"Los estudiantes buenos son " << b << endl;
    cout<<"Los estudiantes regulares son " << r << endl;
    cout<<"Los estudiantes bajos son " << ot << endl;
    
    return 0;
}
