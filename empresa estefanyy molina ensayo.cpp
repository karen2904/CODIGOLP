#include<iostream>

using namespace std;

int main(){
    float modelo=1, modga, moddi , gasolina=0, diesel=0, semga, semdi, modmnt, modlla;
    float totalmodga, totalmoddi, totalmodmnt, totalmodlla, totalga, totaldi, total, totalla;
    
    cout<<"A continuación, se calcularan los costos de la empresa LPD generados por su parque automotor. Responde a cada uno de los requisitos: ";
    
    do{
    cout<<"\n\n¿Cuantas camiontetas tiene por cada modelo? " ; 
	cin>> modelo;
    cout<<"\n¿Cuantas camionetas son de gasolina? ";cin>> modga;
    cout<<"\n¿Cuantas camionetas son de diesel? ";cin >>moddi;
    cout<<"\n¿Cuanto cuesta el galón de gasolina? ";cin>> gasolina; 
    cout<<"\n¿Cuanto cuesta el galón de diesel? ";cin >>diesel;
    cout<<"\n¿Cual es el consumo semamal de gasolina del modelo "<<modelo<<" ? ";cin>> semga;
    cout<<"\n¿Cual es el consumo semamal de diesel del modelo "<<modelo<<" ? ";cin>> semdi;
    cout<<"\n¿Cual es el valor mensual de mantenimiento del modelo "<<modelo<<" ? ";cin>> modmnt;
    
    
    
    
    
    }while(modelo==modelo);
    
    
    return 0;
}
