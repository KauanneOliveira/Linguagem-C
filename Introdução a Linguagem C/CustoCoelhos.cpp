#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
	int NR_C;
	float C;
	printf("\n============================================\n");
	printf("\n\t\tCusto dos Coelhos\n");
	printf("\n============================================\n");
	printf("\nEntre com o numero de coelhos:\n");
	scanf("%d", &NR_C);
	C=(NR_C*0.70)/18+10;
	printf("\nO valor do custo será de:\n\t%.2f", C);
	getch();
	return 0;
}
