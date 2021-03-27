/******************************************************************************

CONVERSOR DE PESOS A DOLARES
FECHA 28/3/2021
AUTOR:SEBASTIAN LOPEZ

******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
   float pesos,tmr;
   float total;
   
   cout << "dijite el valor a convertir----->";
   cin >> pesos;
   cout << "dijite la TMR--------->";
   cin >> tmr;
   
   total=(pesos)/(tmr);
   
   cout << "el total en pesos es----->"<<total;
   
    return 0;
}
