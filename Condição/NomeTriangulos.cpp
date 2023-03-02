#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float A,B,C;
	printf("\nDigite o valor do lado A:\n");
	scanf("%f", &A);
	printf("\nDigite o valor do lado B:\n");
	scanf("%f", &B);
	printf("\nDigite o valor do lado C:\n");
	scanf("%f", &C);
	if((A<(B+C))&&(B<(A+C))&&(C<(A+B))){
		if((A==B)&&(B==C)&&(C==A))
		printf("\nOs valores fornecidos formam um triângulo equilátero");
		else
		if((A!=B)&&(B!=C)&&(C!=A))
		printf("\nOs valores fornecidos formam um triângulo escaleno");
		else
		printf("\nOs valores fornecidos formam um triângulo isósceles");
	}else
	printf("\nOs valores fornecidos nâo formam um triângulo");
	getch();
	return 0;
}
