#include <iostream> //inicio del programa

using namespace std;

int main ()
{
	//definiendo las variables
	//mc=modelo camioneta   , combd=combustible diario ,  combt= combustible total , mant= mantenimiento, manta=mantenimiento anual , mantt=mantenimien tototal ; vg= valor gasolina, comb=combustible
    float mc2010, mc2015, mc2020, mc2022 , gt,  meses=12, combd, combt, mantm ;
	float vg=10000 ;
	float dt=260 ;
	float	mant2010= 1500000 ;
	float	mant2015= 1100000 ;
	float	mant2020=400000  ;
	float   mant2022= 300000  ;
	float	manta2010 ,  manta2015, manta2020, manta2022, mantt , comb2015=10 ;
	float comb2020=7 , comb2010=12 , comb215=10 , comb2022= 6 , vcomb2010, vcomb2015 , vcomb2020 , vcomb2022 ;
    
    
   printf("Programa para una empresa de transporte ");
 
   
   printf (" Ingrese el numero de camionetas 2010: " );
   scanf ( "%f" ,& mc2010 );
   
   printf (" Ingrese el numero de camionetas 2015: "  );
   scanf ( "%f" ,& mc2015);
   
   printf (" Ingrese el numero de camionetas 2020: "  );
   scanf ( "%f" ,&  mc2015);
   
   printf (" Ingrese el numero de camionetas 2022: "  );
   scanf ( "%f" ,& mc2015);
   
   
   //formulas de combustible
   
	 
   printf ("El costo del combustible anual para modelo 2010 ");
   scanf ( "%f" ,&  vcomb2010);
   comb2010=12 ;
   dt= 260 ;
   vg=10,000 ;
   vcomb2010= mc2010*dt*comb2010*vg ;
   printf ( "El costo del combustible para el modelo 2010: %f" , vcomb2010); 
   
   scanf ( "%f" ,& vcomb2015);
   vcomb2015= mc2015*dt*comb2015*vg ;
   printf ( "El costo del combustible para el modelo 2015: %f" , vcomb2015);
    
   
   scanf ( "%f" ,& vcomb2020);
   vcomb2020= mc2020*dt*comb2020*vg ;
   printf ( "El costo del combustible para el modelo 2020: %f" , vcomb2020);
   
   
   scanf ( "%f" ,& vcomb2022);
   vcomb2022= mc2022*dt*comb2022*vg ;
   printf ( "El costo del combustible para el modelo 2022: %f" , vcomb2022);
   
  
   scanf( "%f" , & combt);
   printf ( "El costo total del combustible es: %f" , combt);
   
   combt= vcomb2010 + vcomb2015 + vcomb2020 + vcomb2022 ;
      
   //formulas de mantenimiento
   
   manta2010= mant2010*meses;
   manta2015=mant2015*meses;
   manta2020=mant2020*meses;
   manta2022=mant2022*meses;
   mantt= manta2010 + manta2015 + manta2020 + manta2022 ;
   
   printf ( "Calcule el costo del mantenimiento anual para el modelo 2010 ");
   scanf ( "%f", & mant2010) ;
   
   printf ( "Calcule el costo del mantenimiento anual para el modelo 2015 ");
   scanf ( "%f", & mant2015) ;
    
   printf ( "Calcule el costo del mantenimiento anual para el modelo 2020 ");
   scanf ( "%f", & mant2020) ;
   
   printf ( "Calcule el costo del mantenimiento anual para el modelo 2022 ");
   scanf ( "%f", & mant2022) ;
   
   printf ( "Calcule el costo del mantenimiento anual total ");
   scanf ( "%f", & mantt) ;

   gt= mantt + combt ; //formula de gasto total
    
   printf ( "Calcule el costo de los gastos totales de mantenimiento y combustible ");
   scanf ( "%f", & gt) ;	

	 
	     
	return 0;
}
   
