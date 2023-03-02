#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
	float D, R;
	printf("\nEscreva o valor em dolar:\n");
	scanf("%f", &D);
	R= D*2.40;
	printf("\nO valor em reais é:\n\t%.2f", R);
	getch();
	return 0;
}
