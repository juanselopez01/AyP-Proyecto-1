Algoritmo conjunto
	Definir n,i,j,k,f Como Entero
	Definir numeross Como Real
	Dimension numeross[100]
	i <- 0
	j <- 0
	k <- 0
	f <- 0
	
	// datos del usuario validados
	Escribir 'Dijite un numero entre 1 y 100'
	Leer n
	Mientras n<1 O n>100 Hacer
		Escribir 'dijite un numero valido'
		Leer n
	FinMientras
	
	Escribir 'dijite los numeros'
	Leer numeross[t]
	Para t<-1 Hasta n-1 Hacer
		Leer numeross[t]
	FinPara
	
	// contador de cantidad de numeros dependiendo sus cifras
	
	Para t<-0 Hasta n-1 Hacer
		Si numeross[t] < 100 Entonces
			i <- i+1
		FinSi
	FinPara
	Escribir 'cantidad de numeros menores a 100 =======>',i
	
	Para t<-0 Hasta n-1 Hacer
		Si numeross[t]>=100 Y numeross[t]<1000 Entonces
			j <- j+1
		FinSi
	FinPara
	Escribir 'cantidad de numeros de 3 cifras =======>',j
	
	Para t<-0 Hasta n-1 Hacer
		Si numeross[t]>=1000 Y numeross[t]<10000 Entonces
			k <- k+1
		FinSi
	FinPara
	
	Escribir 'cantidad de numeros de 4 cifras =======>',k
	
	Para t<-0 Hasta n-1 Hacer
		Si numeross[t]>=10000 Entonces
			f <- f+1
		FinSi
	FinPara
	Escribir 'cantidad de numeros mayores a 4 cifras =======>',f
	
FinAlgoritmo
