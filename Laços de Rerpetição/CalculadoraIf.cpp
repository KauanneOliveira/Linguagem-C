#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("\n================================================================================");
	printf("\n\t\tCalculadora b�sica usando a condi��o IF");
	printf("\n================================================================================");
	float a, b;
	char S, R;
	printf("\n\tDigite um operador (+,-,*,/) ou aperte S para fechar o programa\n");
	scanf("%c", &R);
	if(R == '+'){
		printf("\nDigite um n�mero:\n");
		scanf("%f", &a);
		printf("\nDigite o outro n�mero:\n");
		scanf("%f", &b);
		a = a+b;
		printf("\nResposta= %.2f", a); }
	if(R == '-'){
		printf("\nDigite um n�mero:\n");
		scanf("%f", &a);
		printf("\nDigite o outro n�mero:\n");
		scanf("%f", &b);
		a = a-b;
		printf("\nResposta= %.2f", a); } 
	if(R == '*'){
		printf("\nDigite um n�mero:\n");
		scanf("%f", &a);
		printf("\nDigite o outro n�mero:\n");
		scanf("%f", &b);
		a = a*b;
		printf("\nResposta= %.2f", a); }
	if(R == '/'){
		printf("\nDigite um n�mero:\n");
		scanf("%f", &a);
		printf("\nDigite o outro n�mero:\n");
		scanf("%f", &b);
		a = a/b;
		printf("\nResposta= %.2f", a); }
	if(R == 'S' || R == 's'){
		printf("\nCalculadora Encerrada"); }
	getch();
}

