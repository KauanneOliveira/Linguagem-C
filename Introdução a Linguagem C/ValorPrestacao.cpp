#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
	float P,V,TA,TE;
	printf("\n============================================\n");
	printf("\n\t\tValor da Prestação\n");
	printf("\n============================================\n");
	printf("\nEscreva o valor da prestação:\n");
	scanf("%f", &V);
	printf("\nEscreva o valor da taxa de juros:\n");
	scanf("%f", &TA);
	printf("\nEscreva o tempo em atraso:\n");
	scanf("%f", &TE);
	P=V+(V*(TA/100)*TE);
	printf("\nO valor da prestação em atraso é:\n\t%.2f", P);
	getch();
	return 0;
}

