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
	printf("\nMotrando o vetor atual:");
	for(i=0; i<10; i++){
		printf("\n%i ", vetor[i]);
	}
	printf("\n");
	system("pause");
		for(i=0; i<10; i++){
			if(vetor[i]<0){
				vetor[i]=0;
		}
	}
	printf("\nMotrando o vetor com as substituições dos valores negativos:");
	for(i=0; i<10; i++){
		printf("\n%i ", vetor[i]);
	}
		return 0;
}
