#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	float N1,N2,N3,N4,MF;
	printf("\n==================================================");
	printf("\n\tPrograma de Média Final");
	printf("\n==================================================");
	printf("\nDigite o valor da nota do primeiro bimestre:\n");
	scanf("%f", &N1);
	printf("\nDigite o valor da nota do segundo bimestre:\n");
	scanf("%f", &N2);
	printf("\nDigite o valor da nota do terceiro bimestre:\n");
	scanf("%f", &N3);
	printf("\nDigite o valor da nota do quarto bimestre:\n");
	scanf("%f", &N4);
	MF= (N1+N2+N3+N4)/4;
	printf("\nA média final do aluno é:\n\t%.2f", MF);
	getch();
	return 0;
}
