#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int i=4;
	printf("\n-----------------------------------------------");
	printf("\nDivis�veis por 4 at� o n�mero 200");
	printf("\n-----------------------------------------------");
	if(i%4==0){
		while(i<=200){
			printf("\n%i", i);
			i=i+4;
		}
	}
	getch();
	return 0;
}
