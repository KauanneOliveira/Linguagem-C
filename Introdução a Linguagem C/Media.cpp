#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float P1,P2,A,M;
	printf("\nDigite a nota da primeira prova (peso 40):\n");
	scanf("%f", &P1);
	printf("\nDigite a nota da segunda prova (peso 40):\n");
	scanf("%f", &P2);
	printf("\nDigite a nota das atividades do semestre (peso 20):\n");
	scanf("%f", &A);
	M= ((P1*4)+(P2*4)+(A*2))/10;
	printf("\nA média final é:\n\t%.2f", M);
	getch();
	return 0;
}
