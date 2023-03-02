#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int soma=0, i;
	printf("\n=============================================");
	printf("\nSoma dos 100 primeiros números naturais");
	printf("\n=============================================\n");
	for(i=1;i<=100;++i){
		soma=soma+i;
	}
	printf("\n\n---------------------------------------------");
	printf("\nO resultado é:\t%i", soma);
	printf("\n---------------------------------------------\n");
	getch();
	return 0;
}
