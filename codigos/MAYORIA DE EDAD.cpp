/******************************************************************************

DECIR SI ES MAYOR DE EDAD 
AUTOR:JUAN SEBASTIAN LOPEZ 
FECHA 28/3/2021

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
 
    int actual,nacimiento,resta;
 
     cout<< "dijite el año actual------->";
   
     cin>> actual;
   
      cout<< "dijite el año de nacimiento-------->";
   
      cin>> nacimiento;
   
       resta=actual-nacimiento;
   
       if (resta>=18){
       cout<<"ES MAYOR DE EDAD";
        }
        else
       {
        cout<<"ES MENOR DE EDAD";
    }
    return 0;
}
