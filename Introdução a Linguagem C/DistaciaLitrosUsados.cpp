#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main (){
    setlocale(LC_ALL, "portuguese");
	float D, T, V, LU;
	printf("\nEntre com o tempo:\n");
	scanf("%f", &T);
	printf("\nEntre com a velocidade:\n");
	scanf("%f", &V);
	D=T*V;
	LU=D/12;
	printf("\nOs valores são:\nvelocidade:\t%.2f \ntempo:\t%.2f \ndistância:\t%.2f \nlitros usados:\t%.2f", V, T, D, LU);
	getch();
	return 0;
}
