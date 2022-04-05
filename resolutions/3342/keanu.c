#include <stdio.h>

int main(void){
	int x,a,b, i = 0;
	int cont = 0;
	
	/*Keanu estava testando novos modelos de tabuleiros de xadrez quanto teve a seguinte duvida:

	Quantas casas brancas e quantas casas pretas tem um tabuleiro de xadrez de tamanho nxn?*/	
	

	/*a -> peças brancas e b -> peças pretas */
	
	a = b = 0;

	scanf("%d", &x);
	
	for(; i < (x * x); i++){
		if(cont == 0){
			a++;
			cont = 1;
		}
		else {
			b++;
			cont = 0;
		}
	}
	
	printf("%d casas brancas e %d casas pretas\n", a, b);
	return 0;
}
