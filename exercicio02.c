#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int vetor[10], i, contPares=0;
		setlocale(LC_ALL, "Portuguese");
	printf("BEM-VINDO A MAIS UM DOS EXERCÍCIOS DE LINGUAGEM C");
	printf("\nFaremos o armazenamento de vetores");
	for(i=0; i<10; i++){
		printf("\n\tDigite o valor do vetor[%i]: ", i);
		scanf("%i", &vetor[i]);
	}
	printf("\nValores pares do vetor:");
	for(i=0; i<10; i++){
		if(vetor[i]%2==0){
			printf("\n%i", vetor[i]);
			contPares++;
		}
	}
	printf("\nTotal de valores pares: %i", contPares);
	return 0;
}
