#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int a,b,c;
	printf("\nDigite tr�s n�meros inteiros:\n");
	scanf(" %d %d %d", &a,&b,&c);
	if ((c>b) && (b>a)){
	printf("A sequ�ncia �: %d, %d, %d", a,b,c);
	}
	if ((b>c) && (c>a)){
	printf("A sequ�ncia �: %d, %d, %d", a,c,b);
	}
	if ((c>a) && (a>b)){
	printf("A sequ�ncia �: %d, %d, %d", b,a,c);
	}
	if ((a>c) && (c>b)){
	printf("A sequ�ncia �: %d, %d, %d", b,c,a);
	}
	if ((b>a) && (a>c)){
	printf("A sequ�ncia �: %d, %d, %d", c,a,b);
	}
	if ((a>b) && (b>c)){
	printf("A sequ�ncia �: %d, %d, %d", c,b,a);
	}
	getch();
	return 0;
}
