#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("\n================================================================================");
	printf("\n\tExibição dos números pares de 1 a 20 usando Do...While");
	printf("\n================================================================================");
	int i=2;
	do{
		printf("\n%d", i);
		i= i+2;
	}
	while(i<=20);
	getch();
	return 0;
}
