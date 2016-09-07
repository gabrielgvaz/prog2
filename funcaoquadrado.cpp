#include <stdio.h>

void quad(int a, int b, char carac){

	for (int i=0;i<a;i++){
		printf("\n");
		for (int j=0;j<b;j++){
			printf("%c", carac);
		}
	}
}
int main()
	{
	int a, b;
	char carac;

	printf("\nDigite 2 numeros a e b: ");
	scanf("%d %d", &a, &b);
	
	printf("\nDigite um Caracter: ");
	carac='X';

	quad(a, b, carac);

	return 0;

	}
