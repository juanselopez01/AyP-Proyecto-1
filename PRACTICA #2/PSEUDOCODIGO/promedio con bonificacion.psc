Algoritmo promedio
	Definir n Como Entero
	definir asistensia Como Entero
	definir t,j,posmenor,i Como Entero
	definir menoor,aux,suma,porcentaje,resultado Como Real
	Dimension notas[4]
	n=4
	
	// datos del usuario validadas

	Escribir "dejite el numero de seciones asistidas"
	Leer asistensia
	Mientras  asistensia < 0 o asistensia > 32 hacer 
		Escribir "dijite numero valido entre 0 y 32"
		Leer  asistensia
	FinMientras
	
	Escribir "digite las notas"
	Leer notas[t]
	Mientras notas[t] < 0.0 o notas[t] > 5.0 hacer 
		escribir "dijite nota valida"
		leer notas[t]
	FinMientras
	para t = 1 hasta n-1
		leer notas[t]	
	Mientras notas[t] < 0.0 o notas[t] > 5.0 hacer 
		escribir "dijite nota valida"
		leer notas[t]
	FinMientras
FinPara

	//ordenar vector

	para t = 0  hasta n-1 Con Paso 1 hacer 
		
		posmenor = t
		
		para j = t+1 hasta n-1 Con Paso 1 Hacer
			si notas[j] > notas[posmenor] Entonces
				posmenor = j
				FinSi
		FinPara
		aux = notas[t]
		notas[t] = notas[posmenor]
		notas[posmenor] = aux
		
	FinPara

//promedio de las 3 notas mayores
suma = 0.0
para t = 0 hasta n-2 Con Paso 1 hacer 
	suma = suma + notas[t]	
	resultado = suma / 3

FinPara

Escribir "nota sin bonificaccion =====> ", resultado

// porcentaje de asistencias

    porcentaje = asistensia*100/32

// bonificacion 

	si porcentaje > 80 Entonces
		resultado = resultado + 0.5
	FinSi
	si porcentaje >= 60 y porcentaje <=80 Entonces
		resultado = resultado + 0.2
	FinSi
	si porcentaje < 60 Entonces
		resultado = resultado + (-0.5)
	FinSi
	
	Escribir  "nota con bonificacion es ====> ", resultado

	
FinAlgoritmo
