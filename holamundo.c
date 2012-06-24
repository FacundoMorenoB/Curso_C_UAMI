#include <stdio.h>

main(){
	//Esta primera parte coloca un par de mensajes en pantalla con el texto que aparece entre comillas.	
	printf("Hola jovesnes del curso de C\n");
	printf("Que no piensan saludar\n");

	//El siguiente codigo realiza las operaciones basicas
	int a;
	int b;
	int r;
	float r2;
	a=5;
    	b=3;
    	r=a+b;
	printf("El resultado de sumar %d + %d es: %d\n",a,b,r);
	r=a-b;
	printf("El resultado de restar %d - %d es: %d\n",a,b,r);
	r=a*b;
	printf("El resultado de multiplicar %d * %d es: %d\n",a,b,r);
	r2=a/b;
	printf("El resultado de dividir %d / %d es: %f\n\n",a,b,r2);

	//En esta secion comprovamos si un numero es positivo o negativo
	int c;
	printf("Introduce un numero\n");
	scanf("%d",&c);
	if(c>=0){
		printf("El numero es positivo\n\n");
	}
	else{
		printf("El numero es negativo\n\n");
	}
	
	//Esta seccion se encarga de imprimir un par de mensajes con la condicion switch
	int a2;
	a2=1;
	printf("Este es un switch\n");
	switch(a2){
		case 1:
			printf("La opcion que selecciono es 1.\n");
		break;
		case 2: 
			printf("La opcion que selecciono es 2.\n");
		break;
		default:printf("La opcion selecionada no esta disponible.\n");
	}
}
