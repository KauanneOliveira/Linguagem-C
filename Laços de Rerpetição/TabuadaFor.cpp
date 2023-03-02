#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("\n================================================================================");
	printf("\n\t\t\tTabuada usando For");
	printf("\n================================================================================");
	int i, n, conta;
	printf("\n\t\tDigite o número da tabuada desejada:\t");
	scanf("%i", &n);
	for(i=0; i<=10; ++i){
		conta= n*i;
		printf("\n%i x %i = %i", n, i, conta);
	}
	getch();
	return 0;
}
