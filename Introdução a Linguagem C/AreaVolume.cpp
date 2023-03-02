#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	float V,A,R;
	printf("\nDigite o valor do raio da esfera:\n");
	scanf("%f", &R);
	V= (4*M_PI*pow(R,3))/3;
	A= 4*M_PI*pow(R,2);
	printf("\nO volume da esfera é:\t%.2f", V);
	printf("\nO valor da área da esfera é:\t%.2f", A);
	getch();
	return 0;
}
