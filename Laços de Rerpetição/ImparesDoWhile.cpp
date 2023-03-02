#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("\n================================================================================");
	printf("\n\tIndicação dos números pares e ímpares de 1 a 20 usando Do...While");
	printf("\n================================================================================");
	int i=1;
	do{
		if(i%2 == 1){
			printf("\nÍmpar:\t%d", i);
			++i; }
		else {
			printf("\nPar:\t%d", i);
		++i; }
	}
	while(i<=20);
	getch();
	return 0;
}
