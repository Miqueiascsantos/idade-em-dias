#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char x[45];
	int y=0;
	int r=0;
	
	printf("Digite seu nome: ");
	scanf("%s", &x);
	
	printf("Digite sua idade: ");
	scanf("%i", &y);
	
	r= y * 365;
	
	printf("\n Sua idade em dias: %i d\n",r);
	system("pause");
	
	
	return 0; 
}
