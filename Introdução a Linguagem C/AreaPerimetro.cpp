#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float A,P,a,b;
	printf("\nDigite a medida do lado A do ret�ngulo:\n");
	scanf("%f", &a);
	printf("\nDigite a medida do lado B do ret�ngulo:\n");
	scanf("%f", &b);
	A= a*b;
	P=(2*a)+(2*b);
	printf("\n\tA �rea e per�metro desse ret�ngulo �:\n\n�rea:\t\t%.2f\n\nper�metro:\t%.2f", A,P);
	getch();
	return 0;
	
}
