#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int i=0,m,n;
	printf("\n--------------------------------------------------------\n");
	printf("\n\t\tTabuada\n");
	printf("\n--------------------------------------------------------\n");
	printf("\nEntre com um número que queira a tabuada completa:\n");
	scanf("%i", &n);
	while(i<=10){
		m=n*i;
		printf("\n%ix%i=%i", n,i,m);
		++i;
	}
	getch();
	return 0;
}
