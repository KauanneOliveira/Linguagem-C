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
		printf("\nOs valores fornecidos formam um tri�ngulo equil�tero");
		else
		if((A!=B)&&(B!=C)&&(C!=A))
		printf("\nOs valores fornecidos formam um tri�ngulo escaleno");
		else
		printf("\nOs valores fornecidos formam um tri�ngulo is�sceles");
	}else
	printf("\nOs valores fornecidos n�o formam um tri�ngulo");
	getch();
	return 0;
}
