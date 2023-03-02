#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    int num;
    printf("============================================");
    printf("\n\tPrograma Par ou Ímpar\n");
    printf("============================================");
    printf("\nInsira um número inteiro:\n");
    scanf("%i", &num);
    if(num%2==0){
    printf("\n\n\n\n--------------------------------------------");
    printf("\nO número %i é par!\n", num);
    printf("--------------------------------------------");}
    else{
    printf("\n\n\n\n--------------------------------------------");
    printf("\nO número %i é ímpar!\n", num);
    printf("--------------------------------------------");}
    getch();
    return 0;
}
