#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    float vgas, vdie;
    int  year, i = 0;
    year = 2000;
    long long Ncam[5], cgas[5], cdiesel[5], comsem[5], mntmen[5], lln4[5];
    long long cstfcomb, cstfmnt, cstflln;
    cout << "Bienvenido al programa de la empresa LDP. " << endl;
   
    do {
        cout << "Ingrese la cantidad de camionetas del modelo " << year << endl;
        cin >> Ncam[i];
        i++;
        year= year+5;

    }while (i<5);

    i = 0;
    year = year+ 5;

    do {
        cout << "¿Cuántas camionetas de modelo " << year << " es en diesel?" << endl ;
        cin >> cgas[i];
        if (cgas[i]>Ncam[i]){
        
            cout << "Usted ha sobrepasado el límite de camionetas, teniendo en cuenta el dato anteriormente ingresado. ";
            exit(1);

        }
        cdiesel[i] = Ncam[i]-cgas[i];

        i++;

        year= year+5;

    }while (i<5); 

    cout << "¿Cuanto cuesta el galon de gasolina? " << endl;
    cin >> vgas;
    cout << "¿Cuanto cuesta el galon de diesel? " << endl;
    cin >> vdie;

    i = 0;
    year = 2000;

    do {
        cout << "¿Cuál es su consumo de combustible semanal para la camioneta modelo " << year << "?" << endl;
        cin >> comsem[i];
        i++;
        year=year+5;

    }while (i<5);

    i = 0;
    year = 2000;

    do {
        cout << "¿Cuál es su consumo de mantenimiento mensual para la camioneta modelo " << year << "?" << endl;
        cin >> mntmen[i];
        i++;
        year=year+5;

    }while (i<5);

    i = 0;
    year = 2000;

    do {
        cout << "¿Cuál es el valor del juego de llantas del modelo de camioneta " << year << "?" << endl;
        cin >> lln4[i];
        i++;
        year=year+5;

    }while (i<5);

    cout << endl;
    i = 0;
    year = 2000;

    do {
        cout << "El costo total de combustible anual para el modelo de camioneta " << year << " es:" << (cdiesel[i]*vdie) + (cgas[i]*vgas) << endl;
        i++;
        year=year+5;

    }while (i<5);

    cout << endl;
    i = 0;
    year = 2000;

    do {
        cout << "El costo total anual de mantenimiento para el modelo de camioneta " << year << " es: " << (Ncam[i]*mntmen[i]*12) << endl;
        i++;
        year=year+5;

    }while (i<5);

    cout << endl;
    i = 0;
    year = 2000;

    do {
        cout << "El costo total de gasto de llantas para el modelo de camioneta " << year << " es: " << (Ncam[i]*lln4[i]) << endl;
        i++;
        year=year+5;

    }while (i<5);

    cout << endl;
    i = 0;
    year = 2000;

    do {
        cout << "El costo total que genera cada rubro en el total de camionetas para el modelo " << year << " es: " << endl << "Combustible: " << (cdiesel[i]*vdie) + (cgas[i]*vgas) << endl << "Mantenimiento: " << (Ncam[i]*mntmen[i]*12) << endl << "Llantas: " << (Ncam[i]*lln4[i]) <<  endl << endl;
        i++;
        year=year+5;

    }while (i<5);

    cout << endl;
    i = 0;
    int sumadiesel=0, suma_gas=0, suma_ccam=0, suma_mnt=0, suma_lln=0; //definiendo

    do {
        sumadiesel += cdiesel[i] * 43;
        suma_gas += cgas[i] *43;
        suma_ccam += Ncam[i] ;
        suma_mnt += mntmen[i] ;
        suma_lln += lln4[i] * 4;

        i++;
        
    }while (i<5);

    cstfcomb = (sumadiesel*vdie) + (sumadiesel*vgas); //cstf = costo total/final
    cstfmnt = (suma_ccam*suma_mnt*12);
    cstflln = (suma_ccam*suma_lln);

    cout << "El total de los costos generados por el parque automotor de la transportadora LDP " << "es: " << cstfcomb + cstfmnt + cstflln << endl;
    
    return 0;
}
