#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float V1,V2,D;
	printf("\nDigite o primeiro valor:\n");
	scanf("%f", &V1);
	printf("\nDigite o segundo valor:\n");
	scanf("%f", &V2);
	if(V1==V2)
		printf("\nNão há diferença entre os valores, pois eles são iguais");
		if(V1>V2)
		D= V1-V2;
		else
		D= V2-V1;
		printf("\nA diferença entre os valores é:\n%.2f", D);
		getch();
		return 0;
}
