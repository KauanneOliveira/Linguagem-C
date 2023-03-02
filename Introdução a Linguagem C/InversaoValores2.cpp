#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float A,B;
	printf("\n================================================================\n");
	printf("\n\t\tInversão de Valores 2\n");
	printf("\n================================================================\n");
	printf("\nDigite o valor de A:\n");
	scanf("%f", &A);
	printf("\nDigite o valor de B:\n");
	scanf("%f", &B);
	A= A+B;
	B= A-B;
	A= A-B;
	printf("\nOs valores trocados de A e B são:\nvalor de A:\t%.2f\nvalor de B:\t%.2f", A,B);
	getch();
	return 0;
}
