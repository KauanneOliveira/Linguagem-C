#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("================================================================================");
	printf("\n\t\tPotencia��o");
	printf("\n================================================================================");
	float n, e, r;
	printf("\n\n\nDigite um n�mero:\n");
	scanf("%f", &n);
	printf("\nDigite o expoente desejado:\n");
	scanf("%f", &e);
	r = pow(n,e);
	printf("\nO valor da opera��o �:\n%.2f", r);
	getch();
	return 0;
}
