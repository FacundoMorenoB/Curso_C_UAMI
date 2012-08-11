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
			printf("La opcion que selecciono es 1.\n\n");
		break;
		case 2: 
			printf("La opcion que selecciono es 2.\n\n");
		break;
		default:printf("La opcion selecionada no esta disponible.\n\n");
	}

	//La siguiente seccion de codigo realiza la divicion por definicion de un numero A dado entre un B
	int a3,r3,i3,n3,b3;

        printf("Introduce el dividendo A\n");
	scanf("%d",&a3);
        printf("Introduce  tu divisor B\n");
	scanf("%d",&b3);


	r3=a3;
	n3=0;
	while(r3>=b3){
        	r3=r3-b3;
	        n3=n3+1;
	}
	printf("La division de %d / %d es : %d + un residuo de %d\n\n",a3,b3,n3,r3);

	//En la lineas siguientes se muestra como hacer el factorial con un ciclo for
	printf("Introduce  A\n");
	scanf("%d",&a3);

	r3=1;
	n3=a3;
	for(i3=n3; i3>=1; i3--){
        	r3=n3*r3;
        	n3=n3-1;
	}

	printf("El factorial de %d es : %d\n\n",a3,r3);

	//En esta parte tengan cuidado porque si copian el codigo y lo pegan tal cual les provocara error
	//devido a que hay dos instrucciones main pero lo pongo asi para ver ejemplos de funciones.
	#include <stdio.h>
	int resta(int,int);

	int suma(int x, int y){
	int r;
	r=y+x;
	return(r);
	}

	main(){
		int x,y,r;
		x=5;
		y=10;
		r=suma(x,y);
		printf("El valor de la suma es:%d\n",r);
		r=resta(y,x);
		printf("El valor de la resta es:%d\n",r);
	}

	int resta (int x, int y){
		int r;
		r=x-y;
		return(r);
	}

	//Al igual que la parte anterior esta parte si copiamos el codigo tal cual mandara error
	//pero lo coloco asi para ver un procesimiento.
	#include <stdio.h>

	//definimos una variable global llamada "Z" 
	#define z 4
	
	//Prototipos necesarios para mandar a llamar los procedimientos dentro del codigo sin haber
	//Declarado las funciones antes	
	void llenado (int [z][z],int);
	void imprime (int [z][z]);	
	void suma (int [z][z],int[z][z],int[z][z]);
	
	int main(){
		int A[z][z];
		int a;
		int B[z][z];
		int C[z][z];
		printf("Inserta de cuanto en cuano se va a llenar el arreglo:\n");
		scanf("%d",&a);
		llenado(A,a);
		printf("Inserta de cuanto en cuano se va a llenar el arreglo:\n");
        	scanf("%d",&a);
        	llenado(B,a);	
		suma(A,B,C);
		printf("El resultado de sumar tus dos matrices es:\n");
		imprime(C);
		
	return 0;
	}
	
	//Funcion llenado para una matriz de 2X2 
	void llenado(int A[z][z], int a){
		int i,j;
		
		for(i=0; i<z; i++){
			for(j=0; j<z; j++){
				A[i][j]=a;
				a=a+a;
			}
		}
	}

	void suma(int A[z][z], int B[z][z], int C[z][z]){
        	int i,j;
	
        	for(i=0; i<z; i++){
        	        for(j=0; j<z; j++){
        	                C[i][j]=A[i][j]+B[i][j];
        	        }
        	}
	}

	void imprime(int C[z][z]){
        	int i,j;

        	for(i=0; i<z; i++){
        	        for(j=0; j<z; j++){
        	                printf("%d ",C[i][j]);
        	        }
			printf("\n");
        	}
	}
 
}
