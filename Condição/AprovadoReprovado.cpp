#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float N1,N2,N3,M;
	printf("\nEscreva a primeira nota:\n");
	scanf("%f", &N1);
	printf("\nEscreva a segunda nota:\n");
	scanf("%f", &N2);
	printf("\nEscreva a terceira nota:\n");
	scanf("%f", &N3);
	M= (N1+N2+N3)/3;
	if(M>6.0)
	printf("\nO aluno foi aprovado com a média:\n\t%.2f", M);
	else
	printf("\nO aluno foi reprovado com a média:\n\t%.2f", M);
	getch();
	return 0;
}
