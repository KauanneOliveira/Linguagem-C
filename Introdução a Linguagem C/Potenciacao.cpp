#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
	int A,B;
	printf("\n==============================================\n");
	printf("\n\t\tPotenciacao\n");
	printf("\n==============================================\n");
	printf("\nDigite um número inteiro:\n");
	scanf("%d", &A);
	B= pow(A,2);
	printf("\nO quadrado deste número é:\n%d", B);
	getch();
	return 0;
}
