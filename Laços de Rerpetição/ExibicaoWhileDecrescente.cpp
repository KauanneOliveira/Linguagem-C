#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("\n============================================================================");
	printf("\n\tExibi��o em ordem descrescente dos n�meros pares usando While");
	printf("\n============================================================================");
	int i=20;
	while(i>=1){
		if(i%2 == 0)
		printf("\n%i", i);
		i= i-2;
	}
	getch();
	return 0;
}
