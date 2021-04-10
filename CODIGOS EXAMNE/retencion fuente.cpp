/******************************************************************************

 retencio fuente 
autor juan sebastian lopez
      johan stiven guzman 
      jose luis cardona 
fecha 10/4/2021


*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int salario,hijos,trabajo,neto,retencion;
   
   cout << "digite el salario basico ----->";
   cin >> salario;
   cout << "digite el numero de hijos----->";
   cin >> hijos;  
   cout << "digite el tiempo trabajando------>";
   cin >> trabajo;
   
   if (trabajo >= 0 and trabajo <=9)
   {
     if (hijos >= 0 and  hijos <= 1)
     retencion = ((10*salario)/100);
   }
   {
     if (hijos >= 2 and  hijos <= 3)
     retencion = ((9*salario)/100);
   }    
   {
     if (hijos >= 4)
     retencion = ((7*salario)/100);
   } 
   
   
   if (trabajo >= 10 and trabajo <=19)
   {
     if (hijos >= 0 and  hijos <= 1)
     retencion = ((8*salario)/100);
   }
   {
     if (hijos >= 2 and  hijos <= 3)
     retencion = ((6*salario)/100);
   }    
   {
     if (hijos >= 4)
     retencion = ((4*salario)/100);
   }    
    
   
      if (trabajo >= 20)
   {
     if (hijos >= 0 and  hijos <= 1)
     retencion = ((5*salario)/100);
   }
   {
     if (hijos >= 2 and  hijos <= 3)
     retencion = ((3*salario)/100);
   }    
   {
     if (hijos >= 4)
     retencion = ((2*salario)/100);
   } 
    
    
    neto = salario - retencion;
    
    cout << "su retencion es ---->" << retencion;
    cout << "\n su neto a pagar es---->"<< neto;
    
    
    
    return 0;
}
