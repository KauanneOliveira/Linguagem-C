#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    int num;
    printf("============================================");
    printf("\n\tPrograma Par ou �mpar\n");
    printf("============================================");
    printf("\nInsira um n�mero inteiro:\n");
    scanf("%i", &num);
    if(num%2==0){
    printf("\n\n\n\n--------------------------------------------");
    printf("\nO n�mero %i � par!\n", num);
    printf("--------------------------------------------");}
    else{
    printf("\n\n\n\n--------------------------------------------");
    printf("\nO n�mero %i � �mpar!\n", num);
    printf("--------------------------------------------");}
    getch();
    return 0;
}
