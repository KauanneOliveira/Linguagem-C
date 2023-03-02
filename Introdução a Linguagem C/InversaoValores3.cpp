#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
	float A,B,C;
	printf("\n============================================\n");
	printf("\nInversão de Valores 3\n");
	printf("\n============================================\n");
	printf("\nDigite o valor de A:\n");
	scanf("%f", &A);
	printf("\nDigite o valor de B:\n");
	scanf("%f", &B);
	C=A;
	A=B;
	B=C;
	printf("\nOs valores trocados sao:\nA:%.2f\nB:%.2f", A,B);
	getch();
	return 0;
}

