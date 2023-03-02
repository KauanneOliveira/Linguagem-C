#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
	float R, A,V;
	printf("\n--------------------------------------------\n");
	printf("\n\t\tVolume da Lata\n");
	printf("\n--------------------------------------------\n");
	printf("\nEscreva a altura da lata:\n");
	scanf("%f", &A);
	printf("\nEscreva o raio da lata:\n");
	scanf("%f", &R);
	V= M_PI*pow(R,2)*A;
	printf("\nO volume da lata é:\n%.2f", V);
	getch();
	return 0;
}

