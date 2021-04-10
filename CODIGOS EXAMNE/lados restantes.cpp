/******************************************************************************

hayar lados restantes
autor juan sebastian lopez
      johan stiven guzman 
      jose luis cardona
fecha 10/4/2021


*******************************************************************************/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   float an1,an2,an3,ld1,ld2,ld3,anr1,anr2,anr3;                        /*anr1 es angulo en radianes*/
  
  cout << "digite el angulo contrario al lado dado---->";
  cin>>an1;
  
  cout<<"digite el angulo 2------->";
  cin>>an2;
  
  cout<<"digite el angulo 3------->";
  cin>>an3;
 
  cout<<"digite el lado dado------>";
  cin>>ld1;
  
  
  anr1=((an1*3.14159265358979323846)/180);
  anr2=((an2*3.14159265358979323846)/180);       /* estructuras para pasar de radianes a grados*/
  anr3=((an3*3.14159265358979323846)/180);
  
      if ((an1+an2+an3)==180) {
      
      ld2 = ((ld1*sin(anr2))/sin(anr1));
      
      ld3 = ((ld1*sin(anr3))/sin(anr1));
      
      cout << "el valor del lado 2 es ---->" << ld2;
      cout << "\n el valor del lado 3 es ---->" << ld3;
      }
       else {
   
           cout<<"NO ES UN TRIANGULO";
            }
        return 0;
  
}
