//variables -> c1, c2, c3, c4, g(galón), mnt(mantenimiento), dias, G(valor del galón por año), MNT(costo total de mantenimiento al año), 

//MNTC1 (mantenimiento de la camioneta 1), MNTC2 (mantenimiento de la camioneta 2), MNTC3 (mantenimiento de la camioneta 3), 

//MNTC4 (mantenimiento de la camioneta 4), GC1 (consumo de conbustible por cada camioneta por año), GC2, GC3, GC4, total (suma de G Y MNT)


#include <iostream>

using namespace std;

int main()
{
    int c1, c2, c3, c4, g=10000, dias=260, MNT, G, MNTC1=1500000, MNTC2=1100000, MNTC3=400000, MNTC4=300000;
    int GC1=12, GC2=10, GC3=7, GC4=6;
    int comb1, comb2, comb3, comb4, man1, man2, man3, man4, Total;
    
    
    cout<<"Este programa permite conocer los costos anuales de 4 modelos de camioneta \n \nIngrese la cantidad de camionetas de modelo 2010: ";
    cin>>c1;
    
    cout<<"Ingrese la cantidad de camionetas de modelo 2015: ";
    cin>> c2;
    
    cout<<"Ingrese la cantidad de camionetas de modelo 2020: ";
    cin>>c3;
    
    cout<<"Ingrese la cantidad de camionetas de modelo 2022: ";
    cin>>c4;
    
    comb1= c1*GC1*g*dias;
    comb2= c2*GC2*g*dias;
    comb3= c3*GC3*g*dias;
    comb4= c4*GC4*g*dias;
    
    man1=c1*MNTC1*12;
    man2=c2*MNTC2*12;
    man3=c3*MNTC3*12;
    man4=c4*MNTC4*12;
    
    MNT= man1+man2+man3+man4;
    G= comb1+comb2+comb3+comb4;
    
    Total= MNT+G;
    
    printf("\n\nEl gasto de combustible al año por cada modelo de camioneta es de: \nCamioneta 2010: ");
    cout<<comb1;
    
    printf("\nCamioneta 2015: ");
    cout<<comb2;
    
    printf("\nCamioneta 2020: ");
    cout<<comb3;
    
    printf("\nCamioneta 2022: ");
    cout<<comb4;
    
    printf("\n\nEl gasto por mantenimiento de cada modelo de camioneta al año tiene un valor de: \nCamioneta 2010: ");
    cout<<man1;
    
    printf("\nCamioneta 2015: ");
    cout<<man2;
    
    printf("\nCamioneta 2020: ");
    cout<<man3;
    
    printf("\nCamioneta 2022: ");
    cout<<man4;
    
    printf("\n\nEl valor total del gasto de combustible de todas las camionetas es de: ");
    cout<<G;
    
    printf("\n\nEl valor total del gasto de mantenimiento de todas las camionetas es de: ");
    cout<<MNT;
    
    printf("\n\nLa suma total de los gastos equivale a: ");
    cout<<Total;

    return 0;
}
