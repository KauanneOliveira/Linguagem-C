#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("================================================================================");
	printf("\n\t\tSequência de Fibonacci");
	printf("\n================================================================================");
	int x=1, y=1, z, k;
	do{
		printf("\n%i", y);
		z= x+y;
		x= y;
		y= z;
		k= k+1;
	}
	while (k<=15);
	getch();
	return 0;
}
