#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("\n============================================================================");
	printf("\n\tN�meros �mpares de 1 a 20 usando For");
	printf("\n============================================================================");
	int i;
	for(i=1; i<=20; i= i+2){
		printf("\n%d", i);
	}
	getch();
	return 0;
}
