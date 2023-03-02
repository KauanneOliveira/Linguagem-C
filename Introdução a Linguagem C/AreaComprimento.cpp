#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float A,R,C;
	printf("\nDigite o valor do raio da circunferência:\n");
	scanf("%f", &R);
	A= M_PI*pow(R,2);
	C= 2*M_PI*R;
	printf("\nOs valores de área e comprimento são:\nárea:\t%.2f\ncomprimento:\t%.2f", A,C);
	getch();
	return 0;
}
