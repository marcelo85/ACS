#include<stdio.h>
void imprimir(char *);

int main(){
	int a = 10, i = 0;
	
	imprimir("Inicio do Programa\n");

	switch (a) {
					case 5:
			printf("a = 5\n");
			break;
					case 10:
			printf("a = 10\n");
			break;
					default:
			printf("a = 0\n");
			break;
	}
	
	for (i = 0; i <= 10; i++) {
		printf("a + %d = %d\n", i, a + i);
	}

	imprimir("Fim do Programa\n");
	
	return 0;
}
void imprimir(char * msg) {
	printf(msg);
		
	return;
}
