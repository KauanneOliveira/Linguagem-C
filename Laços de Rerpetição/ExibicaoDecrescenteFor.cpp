#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("\n============================================================================");
	printf("\n\tExibição decrescente do 20 ao 1 usando For");
	printf("\n============================================================================");
	int i;
	for(i=20; i>=1; --i){
		printf("\n%d", i);
	}
	getch();
	return 0;
}
