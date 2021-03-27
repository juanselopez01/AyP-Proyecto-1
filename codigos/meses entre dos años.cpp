/******************************************************************************

MESES ENTRE AÑOS
FECHA 28/3/2021
AUTOR:SEBASTIAN LOPEZ

******************************************************************************/
#include <iostream>

using namespace std;
int main()
{
  int aa,ab,resta,total;
  
  cout << "dijite el año 1--------->";
  cin >> aa;
  cout << "dijite el año 2--------->";
  cin >> ab;
   
    resta=aa-ab;
    
    total=resta*12;
    
    cout << "el numero de meses es------->"<<total;
    return 0;
}

