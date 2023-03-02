#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    float A,B,C,R1,R2,D;
    printf("\nInsira o valor de A:\n");
    scanf("%f", &A);
    printf("\nInsira o valor de B:\n");
    scanf("%f", &B);
    printf("\nInsira o valor de C:\n");
    scanf("%f", &C);
    if(A!=0){
    	D= pow(B,2)-(4*A*C);
    	R1= (-B+sqrt(D))/(2*A);
    	R2= (-B-sqrt(D))/(2*A);
    	printf("\nOs valores para X são:\nX1:\t%.2f\nX2:\t%.2f", R1,R2);
	}
	else
	printf("\nDelta menor que 0, não existe raízes");
	getch();
	return 0;
}
