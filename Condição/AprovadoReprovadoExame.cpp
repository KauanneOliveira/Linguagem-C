#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float N1,N2,M,NE,NM;
	printf("\nDigite a primeira nota:\n");
	scanf("%f", &N1);
	printf("\nDigite a segunda nota:\n");
	scanf("%f", &N2);
	M= (N1+N2)/2;
	if(M>=6.0){
	printf("\nO aluno foi aprovado com a média:\n\t%.2f", M); }
	else {
	printf("\nDigite a nota de exame:\n");
	scanf("%f", &NE);
	NM= (NE+M)/2;
	if(NM>=5.0)
	printf("\nO aluno foi aprovado em exame com a média:\n\t%.2f", NM);
	else
	printf("\nO aluno foi reprovado em exame com a média:\n\t%.2f", NM); }
	getch();
	return 0;
}
