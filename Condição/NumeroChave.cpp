#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int num,NC;
	printf("\nInsera um n�mero entre 0 e 100 (pode ser negativo ou positivo):\n");
	scanf("%i", &num);
	NC=40;
	if(num<0)
	num= num*-1;
	if((num>=0)&&(num<=100)){
		num=num-NC;
		printf("\nA dist�ncia do n�mero digitado e o n�mero chave �:\n\t%i", num);
	}
	else
	printf("\nN�mero inv�lido!");
	getch();
	return 0;
}
