#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float A,R,C;
	printf("\nDigite o valor do raio da circunfer�ncia:\n");
	scanf("%f", &R);
	A= M_PI*pow(R,2);
	C= 2*M_PI*R;
	printf("\nOs valores de �rea e comprimento s�o:\n�rea:\t%.2f\ncomprimento:\t%.2f", A,C);
	getch();
	return 0;
}
