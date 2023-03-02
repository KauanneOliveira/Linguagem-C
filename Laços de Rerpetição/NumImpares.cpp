#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int i=1,v=1;
	printf("\nNúmeros ímpares  até 20\n");
	if(i%2==1){
		v=i;
		while(v<=19){
			printf("\n%i",v);
			v= v+2;
		}
	}
	getch();
	return 0;
}
