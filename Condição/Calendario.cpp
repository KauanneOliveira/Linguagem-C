#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int mes;
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\n\tInsira um número e receba um Mês:\n");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\nInsira um número inteiro de 1 a 12:\n");
	scanf("%i", &mes);
	switch(mes){
		case 1: printf("\nJan"); break;
		case 2: printf("\nFev"); break;
		case 3: printf("\nMar"); break;
		case 4: printf("\nAbr"); break;
		case 5: printf("\nMai"); break;
		case 6: printf("\nJun"); break;
		case 7: printf("\nJul"); break;
		case 8: printf("\nAgo"); break;
		case 9: printf("\nSet"); break;
		case 10: printf("\nOut"); break;
		case 11: printf("\nNov"); break;
		case 12: printf("\nDez"); break;
		default: printf("\nNúmero inválido");
	}
	getch();
	return 0;
}
