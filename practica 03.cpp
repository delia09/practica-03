#include<stdio.h>
#include<stdlib.h>
#include<iostream>
int main ()  {
	float a,b,c,R;
	char opt;	
	printf("a.-Suma\nb.-Resta\nc.-Multiplicacion\nd.-Division\n");
	printf("Seleccione una opcion");
	opt=getchar();
	printf("ingrese el primer operando:   ");
	scanf("%f",&a);
	printf("ingrese el segundo operando:  ");
	scanf("%f",&b);
	switch(opt) {
	case 'a':
	case 'A':
	c=a+b;
	break;
	case 'b':
	case'B':
	c= a-b;
	break;
	case 'c':
	case 'C':
	c=a*b;
	break;
	case 'd':
	case 'D':
		while(b==0) {
			printf("Error b, debe de ser distinto de 0\n");
			printf("introduce el segundo operando:  ");
			scanf("%f", &b);
		}
		c=a/b;
		break;		
     	 default:
		 	printf("error opcion invalida");
		 	opt==R;		 	
}
printf("el resultado es %0.2f",c);
	}
