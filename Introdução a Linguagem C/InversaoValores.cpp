#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float A,B,C;
printf("\n=============================================================================\n");
	printf("\n\t\tInversão dos valores\n");
	printf("\n=============================================================================\n");
	printf("\nDigite o valor de A:\n");
	scanf("%f", &A);
	printf("\nDigite o valor de B:\n");
	scanf("%f", &B);
	C=A;
	A=B;
	B=C;
	printf("\nOs valores trocados de A e B são:\nvalor de A:\t%.2f\nvalor de B:\t%.2f", A,B);
	getch();
	return 0;
}
