#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("\n============================================================================");
	printf("\n\tIndica��o dos n�meros pares e �mpares at� 20 usando While");
	printf("\n============================================================================");
	int i=1;
	while(i<=20){
		if(i%2 == 1){
			printf("\n�mpar:");
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
