#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("\n================================================================================");
	printf("\n\tIndica��o decrescente dos n�meros pares e �mpares usando For");
	printf("\n================================================================================");
	int i;
	for(i=20; i>=1; --i){
		if(i%2 == 0)
			printf("\nPar:\t%d", i);
		else
			printf("\n�mpar:\t%d", i);
	}
	getch();
	return 0;
}
