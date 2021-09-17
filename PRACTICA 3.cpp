
/*********************************************
objetivo: practica de algoritmos 2
autor:juan sebastian lopez
fecha:3/8/2021
**********************************************/


#include <iostream>
#include <vector>
#include <ctime>
#include <iomanip>
#include <fstream>
using namespace std;

//prototipos
void portada(void);
void fechaa(void);
short menu(void);
void letras( );
void dni(void);
int crearArchivoDni();
string leerArchiDni(string verificacioon[],int residuo);
void vecto();
int main()
{

  portada();
	system("pause");
	system("cls");

	int opcion;
 float letra[5][5];

	do{
		opcion = menu();
	switch(opcion)
	{
		case 1: system("cls"); cout << "\n\t\t**** EJERCICIO 10 ****\n";
		 dni();
		  cout<< endl;
		  system("pause");
		  break;
		case 2: system("cls"); cout << "\n\t**** VECTOR 8 ****\n\n";
		vecto();
		  cout<< endl;
		  system("pause");
		  break;
		  case 3: system("cls"); cout << "\n\t\t**** VECTOR 8 ****\n";
		  letras();
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

		 cout << "\t***** PRACTICA ALGORITMOS Y PROGRAMACION #3 *****\n";
		 cout << "\n\t\t\tIntegrante\n \t\tJuan Sebastian Lopez Rodriguez\n";
		 cout << "\n\t\t   Puntos a desarrollar\n  \t\t\t   PUNTO 2 \n  \t\t\t   PUNTO 10\n   \t\t\t   VECTOR 8 \n\n";
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
	  cout << "\t 1. EJERCICIO 10  "<< endl;
	  cout << "\t 2. VECTOR 8 "<< endl;
	  cout << "\t 3. EJERCICIO 2 "<< endl;
	  cout << "\t 0. TERMINAR\n"<< endl;
	  cout << "DIGITE LA OPCION=====>  ";
	  cin >> opcion;
	  while(opcion < 0 or opcion > 3)
	  {
	  	cout << "INGRESE OPCION VALIDA=========>  ";
	  	cin >> opcion;
      }

	return opcion;

}

// modulo ejercicio 2

void letras()
{
	int letras[5][5];
	int digito;
	int i,j;
	i,j = 0;

	
     cout << "DIGITE UN NUMERO ENTRE 0 Y 9 =======> ";
     cin >> digito;
     
     while( digito < 0 or digito > 9 )
     {
     	cout << "DIGITE NUMERO VALIDO =======> ";
     	cin >> digito;
	 }
	


    // letra L
	
	  for(j = 0 ; j < 5 ; j++)
	  {
	  	
		letras[0][j];
		cout << digito << "\n";
	  	
	  	
	  }
	  for(i= 1 ; i < 5 ; i++)
	  {

		letras[4][i];
		cout <<" " << digito  ;


	  }



	  }
	


//modulo ejercicio 10

void dni()
{
	
	int dni,residuo,i,crear;
	string veri,n;
	string verificacioon[28];
	n = -1;
	
	cout << " DIGITE SU DNI =======> ";
	cin >> dni;
	while( dni < 0 or dni > 100000000000)
	{
		cout << " DIGITE DNI VALIDO ========>";
		cin >> dni;
	}
	
	// RESIDUO
	
   residuo = dni % 29;
   
	
    crear = crearArchivoDni();
	if(crear == -1)
	{
		cout << "NO SE PUEDE CREAR ARCHIVO";
	}
        veri = leerArchiDni(  verificacioon, residuo);
        if(veri == n )
        {
        	cout << "NO SE PUEDE LEER ARCHIVO";
		}
        
        cout << "\tSU DNI Y SU LETRA ES\n" << "\t" << dni << "-" << veri;



}

int crearArchivoDni()
{
	string veri[]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z","a","b"};
	fstream archi;
	int i=0;
	
	archi.open("letra_verificacion.txt", ios::out );
	if(archi.fail())
	{
		cout<< "-------- ERROR DE ARCHIVO";
		return -1;
	}
	
	for(i=0 ; i < 28 ; i++)
	{

     archi <<  veri[i]<< "  ";
     
      }

       archi.close();
}

string leerArchiDni( string verificacioon[],int residuo)
{
	int i,j;
	ifstream archi;
	string veri,n ;
	n= -1;
	

	archi.open("letra_verificacion.txt");
	
	if( archi.fail())
	{
		cout << "---------------ERROR AL ABRIR ARCHIVO";
		return n;
	}
	else
	{
  
		for( i = 0; i<28 ; i++)
		{
			
				archi >>  verificacioon[i];
				
				if(residuo == i)
				{
					veri = verificacioon[i];
					
				}
		}
		
  archi.close();
  return veri;
	}

}

//modulo vector 8
void vecto()
{
	
	float vectA[20];
	float vectB[20];
	float vectC[20];
	int i;
	int j=19;
	
	
	
	
			for(i = 0 ; i < 20 ; i++)
		{
		   cout << i+1 << "DIGITE LOS ELEMENTOS DEL VECTOR A ========>  ";
		   cin >> vectA[i];
		   while( vectA[i] < 0 or vectA[i] > 10000000000000000 )
         	{
		cout << "DIGITE NUMERO VALIDO ========> ";
		cin >> vectA[i];

         	}

		}
		
		


		for(i = 0 ; i < 20 ; i++)
		{
		   cout << i+1 <<"DIGITE LOS ELEMENTOS DEL VECTOR B ========>  ";
		   cin >> vectB[i];
		   while( vectB[i] < 0 or vectB[i] > 10000000000000000 )
         	{
		cout << "DIGITE NUMERO VALIDO ========> ";
		cin >> vectB[i];

         	}

		}
	
	for(i = 0 ; i < 20 ; i++ )
	{
		vectC[i] = vectA[i] * vectB[j];
		j--;
		
	}
	
	cout << "VECTOR B \t     VECTOR A  \t    VECTOR C " << endl;
	for(i=0;i<20;i++)
	{
		cout << "  " << vectB[j] << "\t\t\t" << vectB[i] << "\t\t" << vectC[i] << endl;
		j--;
		
	}

	
	
	
	
}


















