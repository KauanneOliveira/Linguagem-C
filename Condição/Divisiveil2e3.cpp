#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int N1,N2,N3,N4;
	printf("\n--------------------------------------------------\n");
	printf("\n\t\tDiv�siveis por 2 e 3\n");
	printf("\n--------------------------------------------------\n");
	printf("\nEscreva quatro n�meros inteiros:\n");
	scanf("\n%d\n%d\n%d\n%d", &N1,&N2,&N3,&N4);
	if((N1%2==0)&&(N1%3==0)){
	printf("\nO n�mero %d � divis�vel por 2 e 3", N1);}
	if((N2%2==0)&&(N2%3==0)){
	printf("\nO n�mero %d � divis�vel por 2 e 3", N2);}
	if((N3%2==0)&&(N3%3==0)){
	printf("\nO n�mero %d � divis�vel por 2 e 3", N3);}
	if((N4%2==0)&&(N4%3==0)){
	printf("\nO n�mero %d � divis�vel por 2 e 3", N4);}
	getch();
	return 0;
}
