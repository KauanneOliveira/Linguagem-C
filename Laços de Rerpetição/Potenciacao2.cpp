#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int k,pot;
	printf("\n-----------------------------------------------");
	printf("\n\t3 elevado de 0 a 15");
	printf("\n-----------------------------------------------");
	for(k=0;k<=15;++k){
		pot=pow(3,k);
		printf("\n3 elevado a %i:\t%i", k,pot);
	}
	getch();
	return 0;
}
