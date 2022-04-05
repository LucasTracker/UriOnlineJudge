#include <stdio.h>

/*Faça um algoritmo para ler um número indeterminado de dados, contendo cada um, a idade de um indivíduo. O último dado, que não entrará nos cálculos, contém o valor de idade negativa. Calcular e imprimir a idade média deste grupo de indivíduos.*/

int main(void){
	int x, somaIdades = 0;
	int cont = 0;

	while(1){
		scanf("%d", &x);
		// sai do loop
		if(x < 0){
			if(cont != 0)
				printf("%.2f\n", (float) somaIdades/cont);
			break;
		}
		cont++; // conta a quantidade de valores inputados
		somaIdades = somaIdades + x;
	}

	return 0;
}
