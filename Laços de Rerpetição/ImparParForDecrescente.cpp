#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("\n================================================================================");
	printf("\n\tIndicação decrescente dos números pares e ímpares usando For");
	printf("\n================================================================================");
	int i;
	for(i=20; i>=1; --i){
		if(i%2 == 0)
			printf("\nPar:\t%d", i);
		else
			printf("\nÍmpar:\t%d", i);
	}
	getch();
	return 0;
}
