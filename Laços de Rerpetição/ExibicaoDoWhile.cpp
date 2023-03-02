#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("\n================================================================================");
	printf("\n\tExibição dos números de 1 a 20 usando Do...While");
	printf("\n================================================================================");
	int i=1;
	do{
		printf("\n%d", i);
		++i;
	}
	while(i<=20);
	getch();
	return 0;
}
