#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
	float F,C;
	printf("\n===================================================================\n");
	printf("\n\tConversão de Temperatura de Fahrenheiti para Celsius\n");
	printf("\n===================================================================\n");
	printf("\nEntre com a temperatura de Fahrenheiti:\n");
	scanf("%f", &F);
	C= (F-32)*5/9;
	printf("\nA tem peratura em Celsius é:\n%.2f", C);
	getch();
	return 0;
}
