
/*********************************************
objetivo: practica de algoritmos 2
autor:juan sebastian lopez
fecha:3/8/2021
**********************************************/


#include<iostream>
#include <vector>
#include <ctime>
#include <iomanip>
using namespace std;

//prototipos
void portada(void);
void fechaa(void);
short menu(void);
void conjunto_numeros();
void promedio_practicas(void);
void contador_segun_cifras(int n,float numeros[]);
float ordenar_vector(float notas[]);
void bonificacion(float porcentaje , float resultado);

int main()
{
	
  portada();
	system("pause");
	system("cls");
	
	int opcion;

	do{
		opcion = menu();
	switch(opcion)
	{
		case 1: system("cls"); cout << "\n\t\t**** CANTIDAD DE NUMEROS SEGUN SU CIFRA ****\n";
		  conjunto_numeros();
		  cout<< endl;
		  system("pause");
		  break;
		case 2: system("cls"); cout << "\n\t**** PROMEDIO CON BONIFICACION ****\n";
	     promedio_practicas();
		  cout<< endl;
		  system("pause");
		  break;
		  case 0: system("cls"); cout << "\n\n\t\t**** FIN ****\n";
		  cout<< endl;
		  break;

	}

}
   while(opcion !=0);

	
	return 0;
}


//modulo de la portada

void portada()
{

		 cout << "\t***** PRACTICA ALGORITMOS Y PROGRAMACION *****\n";
		 cout << "\n\t\t\tIntegrante\n \t\tJuan Sebastian Lopez Rodriguez\n";
		 cout << "\n\t\t   Puntos a desarrollar\n  \t\t  GRUPO 1 ===> PUNTO 6\n  \t\t  GRUPO 2 ===> PUNTO 1\n\n";
          fechaa();
        cout << endl;
		
	
}


//modulo fecha y hora

void fechaa(void)
{
  time_t now = time(0);

  tm * time = localtime(&now);

vector<string> dia_semana;
dia_semana.push_back("Domingo");
dia_semana.push_back("Lunes");
dia_semana.push_back("Martes");                                  
dia_semana.push_back("Miercoles");
dia_semana.push_back("Jueves");
dia_semana.push_back("Viernes");
dia_semana.push_back("Sabado");
																  /******************************************
                                                                   este bloque lo eh sacado de la siguiente pagina
                                                                 http://jquery-manual.blogspot.com/2015/05/24-tutorial-de-c-en-espanol-ctime-fecha.html
													              y lo eh acomodado a mis necesidades
																 **********************************/
vector<string> mes;
mes.push_back("Enero");
mes.push_back("Febrero");
mes.push_back("Marzo");
mes.push_back("Abril");
mes.push_back("Mayo");
mes.push_back("Junio");
mes.push_back("Julio");
mes.push_back("Agosto");
mes.push_back("Septiembre");
mes.push_back("Octubre");
mes.push_back("Noviembre");
mes.push_back("Diciembre");

int year = 1900 + time->tm_year;

cout << "\t\t" << dia_semana[time->tm_wday] << ", ";
cout << time->tm_mday << " de " << mes[time->tm_mon] << " del " << year << endl;
cout << "\t\t\t" << time->tm_hour << ":" << time->tm_min << ":" << time->tm_sec << endl;

 

}

// modulo menu

short menu(void)
{
	
     short opcion;

	 system("cls");
	  cout << "\n\t   ******* MENU *******\n\n";
	  cout << "\t 1. EJERCICIO 6 DEL GRUPO 1 "<< endl;
	  cout << "\t 2. EJERCICIO 1 DEL GRUPO 2"<< endl;
	  cout << "\t\t0. TERMINAR\n"<< endl;
	  cout << "DIGITE LA OPCION=====>  ";
	  cin >> opcion;
	  while(opcion < 0 or opcion > 2)
	  {
	  	cout << "INGRESE OPCION VALIDA=========>  ";
	  	cin >> opcion;
      }
	
	return opcion;
	
}

// modulo conjuto numeros
void conjunto_numeros(void)
{
#define maximo 100
int n,t;
float numeros[maximo];



  cout << "\n DIGITE UN NUMERO ENTRE 1 Y 100\n";
  cout << "\n =========> ";
  cin >> n;
  
  while (n < 1 or n > 100)
  {
  	cout << "\n DIGITE UN NUMERO VALIDO\n";
  	cout << "\n =========> ";
  	
  	cin >> n;
  }
 
   cout << "\n DIGITE CUALQUIER NUMERO\n";
    cout << " ";
   cin >> numeros[t];
    
   for (t = 1; t < n; t++)
   {
   	cout << " ";
	 cin >> numeros[t];
  }
  
  contador_segun_cifras( n, numeros);

}

// modulo contador de cantidad segun sus cifras

void contador_segun_cifras(int n,float numeros[])
{
 system ("cls");
int i,j,k,f,t;
i=0;
j=0;
k=0;
f=0;

  for(t = 0 ; t < n; t++)
  {
  	if (numeros[t] < 100)
  	{
  		i = i + 1;
	  }
  }
 cout << "\nNUMEROS MENORES A 100 ======> " << i << "\n";

  for(t = 0 ; t < n; t++)
  {
  	if (numeros[t] >= 100 and numeros[t] < 1000)
  	{
  		j = j + 1;
	  }
  }
 cout << "\nNUMEROS DE 3 CIFRAS ======> " << j << "\n";
	
	  for(t = 0 ; t < n; t++)
  {
  	if (numeros[t] >= 1000 and numeros[t] < 10000)
  	{
  		k = k + 1;
	  }
  }
 cout << "\nNUMEROS DE 4 CIFRAS ======> " << k << "\n";
	
	  for(t = 0 ; t < n; t++)
  {
  	if (numeros[t] >= 10000 )
  	{
  		f = f + 1;
	  }
  }
 cout << "\nNUMEROS MAYORES DE 4 CIFRAS ======> " << f << "\n";
	
}




// modulo promedio practicas
void promedio_practicas(void)
{
     #define maximo 4
     int asistencia,t;
	 float notas[maximo],suma,resultado,porcentaje;
	 
	 cout << "\n DIGITE EL NUMERO DE SESIONES ASISTEDAS";
	 cout << "=======>";
	 cin >> asistencia;
	 while(asistencia < 0 or asistencia > 32)
	 {
	 	cout << "\n DIJITE VALOR VALIDO ENTRE 1 Y 32";
	 	cout << "======>";
		cin >> asistencia;
	 }
     
     cout << "\nDIGITE DE LAS NOTAS\n";
     cout << " ";
	 cin >> notas[t];
	 
	 while (notas[t] < 0.0 or notas[t] > 5.0)
	 {
	 	cout << "\nDIGITE NOTA VALIDA\n";
	 	cout << " ";
	 	cin >> notas[t];
	 }
	 for (t = 1 ; t < maximo; t++)
     {
     	cout << " ";
     	cin >> notas[t];
     	while (notas[t] < 0.0 or notas[t] > 5.0)
	 {
	 	cout << "\nDIGITE NOTA VALIDA\n";
	 	cout << " ";
	 	cin >> notas[t];
	 }
	 }

    ordenar_vector(notas);


     suma = 0.0;

     for ( t = 0 ; t < 3; t++)
     {
     	suma = suma + notas[t];
     	resultado = (suma / 3);
	 }


     cout << "\tNOTA SIN BONIFICACION ======>  " << fixed << setprecision(1) << resultado << endl;


	  porcentaje = ((asistencia*100)/(32));
	  

	 bonificacion( porcentaje , resultado);

}

//modulo ordenar notas
float ordenar_vector(float notas[])
{
	int posmenor,t,j;
	float aux;
	#define maximo 4

	for (t = 0 ; t < maximo ; t++)
	{
		posmenor = t;

		for ( j = t+1 ; j < maximo ; j++)
		{
			if (notas[j] > notas[posmenor])
			{
				posmenor = j;
			}
			aux = notas[t];
			notas[t] = notas[posmenor];
			notas[posmenor] = aux;

		}

	}

}

// bonificacion por asistencia

void bonificacion(float porcentaje , float resultado)
{
	
  if (porcentaje > 80 )
  {
  	resultado = resultado + 0.5;
  }

  if (porcentaje >= 60 and porcentaje <= 80)
  {
  	resultado = resultado + 0.2;
  }
  if (porcentaje < 60)
  {
  	resultado = resultado - (0.5);
  }
	
	cout << "\tNOTA CON BONIFICACION ======>  " << fixed << setprecision(1) << resultado << endl;
	
	
}













