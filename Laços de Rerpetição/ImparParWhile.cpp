#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("\n============================================================================");
	printf("\n\tIndicação dos números pares e ímpares até 20 usando While");
	printf("\n============================================================================");
	int i=1;
	while(i<=20){
		if(i%2 == 1){
			printf("\nÍmpar:");
			printf("\t%d", i);
			++i;
		}
		else{
			printf("\nPar:");
			printf("\t%d", i);
			++i;
		}
	}
	getch();
	return 0;
}
