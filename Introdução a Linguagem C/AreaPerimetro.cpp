#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float A,P,a,b;
	printf("\nDigite a medida do lado A do retângulo:\n");
	scanf("%f", &a);
	printf("\nDigite a medida do lado B do retângulo:\n");
	scanf("%f", &b);
	A= a*b;
	P=(2*a)+(2*b);
	printf("\n\tA área e perímetro desse retângulo é:\n\nÁrea:\t\t%.2f\n\nperímetro:\t%.2f", A,P);
	getch();
	return 0;
	
}
