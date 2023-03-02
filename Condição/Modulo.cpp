#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
	int n,x;
	printf("\n-------------------------------------------------------");
	printf("\n\t\tMódulo de um número\n");
	printf("\n-------------------------------------------------------");
	printf("\nDigite um valor inteiro:\n");
	scanf("%i", &n);
	if(n<0)
	x=n*-1;
	else
	x=n;
	printf("\nO valor deste módulo é:\n%i", x);
	getch();
	return 0;
}
