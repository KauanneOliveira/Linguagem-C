#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float IMC,A,M;
	printf("\nEscreva a altura:\n");
	scanf("%f", &A);
	printf("\nEscreva a massa:\n");
	scanf("%f", &M);
	IMC= M/pow(A,2);
	printf("\nO IMC desse corpo é:\n%.2f", IMC);
	getch();
	return 0;
}
