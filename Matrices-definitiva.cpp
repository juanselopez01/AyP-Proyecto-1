/*******				Autores: Todos
						Objetivo: Matrices
						Fecha: 04/09/2021							*****/

#include <iostream>
#include <string>
#include <stdio.h>
#define TAM_MAX 45
#define TAM_MIN 1


using namespace std;
int Leer_notas(float notas[][5],string nombre[]);
void mostrar(int n, float notas[][5], string nombre[]);
void calculo_Def(int n, float notas[][5]);
void calcular_Estad(int n, float notas[][5],string nombre[]);
int main(){
	string nombre[TAM_MAX];
	float notas[TAM_MAX][5];
	int n;
	n=Leer_notas(notas,nombre);
	mostrar(n, notas, nombre);
	calculo_Def(n, notas);
	mostrar(n, notas, nombre);
	calcular_Estad(n, notas, nombre);
	return 0;
}
int Leer_notas(float notas[][5],string nombre[]){
	int n;
	int i,j;
	do{
	cout<<"\nIngrese numero de estudiantes"<<"entre"<<" "<<TAM_MIN<<" "<<"y"<<" "<<TAM_MAX<<": ";
	cin>>n;
	}while(n > TAM_MAX or n < 1);
		for(i=0;i<n;i++){
			cout<<"\nIngresar nombre del estudiante "<<i+1<<" ";
			cin.ignore();
			getline(cin,nombre[i]);
			for(j=0;j<4;j++){
				do{
				cout<<"Ingresar nota del estudiante "<<j+1<<"\nDel estudiante "<<nombre[i];
				cin>>notas[i][j];
				}while(notas[i][j]<0.0 or notas[i][j]>5.0);
			}
		}
	
	return n;
	
}
void mostrar(int n, float notas[][5], string nombre[]){
	int i, j;
	system("cls");
	cout<<"Nro.\tNombre\tNota 1\tNota 2\tNota 3\tNota 4\tDefinitiva";
	for(i=0; i < n; i++){
		cout<<"\n"<<i+1<<"\t"<<nombre[i];
		for(j=0; j<5; j++){
			cout<<"\t"<<notas[i][j];
		}
	}
	cout<<"\n\n";
	system("pause");
}
void calculo_Def(int n, float notas[][5]){
	int i, j;
	float suma;
	for(i=0; i < n; i++){
		suma= 0.0;
		for(j=0; j< 4;j++){
			suma=suma+notas[i][j];
		}
		notas[i][4]=suma/4;	
	}
}
void calcular_Estad(int n, float notas[][5],string nombre[]){
	int i;
	int Ganaron, Perdieron;
	float promedio;
	float Spromedio, Bpromedio;
	Ganaron=0;
	Perdieron=0;
	float suma;
	suma=0;
	for(i=0;i<n;i++){
		if(notas[i][4]>=3.0){
		 Ganaron++;
		}Perdieron++;
	}
	for(i=0;i<n;i++){
		suma=suma+notas[i][4];
	}
	promedio=suma/n;
	Spromedio=0;
	Bpromedio=0;
	for(i=0;i<n;i++){
		if(promedio<notas[i][4]){
			Spromedio=Spromedio+1;
			}else{
			if(promedio>notas[i][4]){
				Bpromedio=Bpromedio+1;
			}
			}
	}
	cout<<"\n\n";
	cout<<"La nota promedio es:  "<<promedio<<endl;
	cout<<"Los estudiantes que ganaron son:  "<<Ganaron<<endl;
	cout<<"Estudiante que quedo superior al promedio: "<<Spromedio<<endl;
	cout<<"Estudiante que quedo debajo del promedio: "<<Bpromedio<<endl;
	
}
