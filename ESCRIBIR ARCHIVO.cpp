// registros en un archivo

#include <fstream>
#include <iostream>
#include <stdio.h>
#define TAM_MAX 45

using namespace std;

 int crearArchivo();
 int leerArchivo(string nombre[], float matriz[][5]);
 void mostrar (string nombre[],float matriz[][5],int n);
 void calculo_Def(int n, float matriz[][5]);
 void calcular_Estad(int n, float matriz[][5],string nombre[]);

// principal

int main()
{
	int resultado;
	int n;
	string adi;
	string nombre[TAM_MAX];
	float matriz[TAM_MAX][5];
	
	cout << "quiere adicionar datos (SI/NO)? ======> ";
	cin >> adi;
	if(adi == "si" or adi == "SI" )
	{
		resultado = crearArchivo();
		if(resultado == -1)
	{
		cout << "NO SE PUDO CREAR EL ARCHIVO";
	}
	}
	else
	{
			n = leerArchivo(nombre,matriz);
	if(n== -1)
	{
		cout << "NO SE PUEDE LEER ARCHIVO";
	}
	else
	{
		calculo_Def(n, matriz);
		mostrar(nombre,matriz,n);
		calcular_Estad(n, matriz, nombre);
	}
		
	}
return 0;
}



int crearArchivo()
{
	string nombre;
	float notas[4];
	char seguir;
	fstream archi;
	int i;
	
	archi.open("estudNota.txt",ios::in | ios::out | ios::app );
	if(archi.fail())
	{
		cout<< "-------- ERROR DE ARCHIVO";
		return -1;
	}
	seguir = 's';
	do
	{
		cout << "\ningresar nombre estudiante =====>" ;
		cin.ignore();
		getline(cin,nombre);
		archi<<nombre<<"  ";
		for (i = 0; i<4; i++)
		{

		do
		{
			cout << "ingrese nota valida===>";
			cin >> notas[i];
		}
		while(notas[i]<0.0 or notas[i]>5.0);
		archi<<notas[i]<<"  ";
	}
		archi << "\n";
		
		cout << "seguir entrando datos?";
		cin >> seguir;

	}while (seguir == 's');
	archi.close();
	return  1;
}
	
    int leerArchivo(string nombre[], float matriz[][5])
    {
		int n,i,j;
		ifstream archi;
		archi.open("estudNota.txt");
		
		if(archi.fail())
		{
			cout << "------ ERROR AL ABRIR ARTCHIVO";
			return -1;
		}
		else
		{
			i = 0;
			while(!archi.eof())
		{
			 archi >> nombre[i] >> matriz[i][0] >> matriz[i][1] >> matriz[i][2] >>matriz[i][3];
			 i++;
		}
		archi.close();
		return i;
		}
		
	}

	

void mostrar (string nombre[],float matriz[][5],int n)
{
system("cls");
	int i;
	cout << "\t TABLA DE NOTAS"<< endl;
	cout << "-----------------------------------------------------------"<< endl << endl;
	for(i= 0 ; i<n; i++)
	{
		
		cout << nombre[i];
		printf("\t %4.2f \t %4.2f \t %4.2f \t %4.2f \t %4.2f \n",matriz[i][0] ,matriz[i][1] , matriz[i][2] , matriz[i][3], matriz[i][4]);
	}
	cout << "__________________________________________________________";
}



void calculo_Def(int n, float matriz[][5])
{
	int i, j;
	float suma;
	for(i=0; i < n; i++)
	{
		suma= 0.0;
		for(j=0; j< 4;j++)
		{
			suma=suma+matriz[i][j];
		}
		matriz[i][4]=suma/4;
	}

}

void calcular_Estad(int n, float matriz[][5],string nombre[])
{
	int i;
	int Ganaron, Perdieron;
	float promedio;
	float Spromedio, Bpromedio;
	fstream archivoEsta;
	
	Ganaron=0;
	Perdieron=0;
	float suma;
	suma=0;
	
	archivoEsta.open("estudEsta.txt", ios::out | ios::app);
	
	for(i=0;i<n;i++){
		if(matriz[i][4]>=3.0){
		 Ganaron++;
		}Perdieron++;
	}
	for(i=0;i<n;i++){
		suma=suma+matriz[i][4];
	}
	promedio=suma/n;
	Spromedio=0;
	Bpromedio=-1;
	for(i=0;i<n;i++){
		if(promedio<matriz[i][4]){
			Spromedio=Spromedio+1;
			}else{
			if(promedio>matriz[i][4]){
				Bpromedio=Bpromedio+1;
			}
			}
	}
	archivoEsta<<"\n";
	archivoEsta<<"La nota promedio es:  "<<promedio<<endl;
	archivoEsta<<"Los estudiantes que ganaron son:  "<<Ganaron<<endl;
	archivoEsta<<"Estudiante que quedo superior al promedio: "<<Spromedio<<endl;
	archivoEsta<<"Estudiante que quedo debajo del promedio: "<<Bpromedio<<endl;

	archivoEsta.close();
}

























