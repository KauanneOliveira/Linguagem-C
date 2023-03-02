#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("\n================================================================================");
	printf("\n\t\tCalculadora b�sica usando la�o de repeti��o e switch...case");
	printf("\n================================================================================");
	float a, b, x;
	char resp, op;
	resp= 'n';
	while( resp == 'N' || resp == 'n'){
		printf("\n\t\t\tDigite a opera��o desejada\nOp��es : +, -, *, /\n");
		scanf("%c", &op);
		switch(op){
			case '+' :
				printf("\n\nDigite os valores a serem somados (um debaixo do outro):\n");
				scanf("%f %f", &a, &b);
				x= a+b;
				printf("\n\nO resultado �: %.2f", x);
				break;
			case '-' :
				printf("\n\nDigite os valores a serem subtra�dos (um debaixo do outro):\n");
				scanf("%f %f", &a, &b);
				x= a-b;
				printf("\n\nO resultado �: %.2f", x);
				break;
			case '*' :
				printf("\n\nDigite os valores a serem multiplicados (um debaixo do outro):\n");
				scanf("%f %f", &a, &b);
				x= a*b;
				printf("\n\nO resultado �: %.2f", x);
				break;
			case '/' :
				printf("\n\nDigite os valores a serem divididos (um debaixo do outro):\n");
				scanf("%f %f", &a, &b);
				x= a/b;
				printf("\n\nO resultado �: %.2f", x);
				break;
			default:
				printf("\nOpera��o Inv�lida!");
		}
		fflush(stdin);
		printf("\n\n\tDeseja sair da calculadores? [S]IM / [N]�O + <Enter>\n");
		resp= getchar();
	}
	getch();
	return 0;
}
