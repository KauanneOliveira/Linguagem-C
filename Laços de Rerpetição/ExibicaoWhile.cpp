#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("============================================================================");
	printf("\n\t\tExibi��o dos n�meros at� 20 usando While");
	printf("\n==========================================================================");
	int i=1;
	while(i<=20){
		printf("\n%i", i);
		i+=1;
	}
	getch();
	return 0;
}
