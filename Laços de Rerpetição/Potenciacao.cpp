#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int i=15,x;
	printf("\n-----------------------------------------------");
	printf("\nQuadrado dos números inteiros de 15 a 200");
	printf("\n-----------------------------------------------");
	while(i<=200){
		x=pow(i,2);
		printf("\n%i", x);
		++i;
	}
	getch();
	return 0;
}
