#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a[6], i, somaValores;
	printf("BEM-VINDO A MAIS UM DOS EXERCÍCIOS DE LINGUAGEM C");
	printf("\nFaremos o armazenamento de vetores");
	for(i=0; i<6; i++){
		printf("\n\tDigite o valor do a[%i]: ", i);
		scanf("%i", &a[i]);
	}
	somaValores = a[0]+a[1]+a[5];
	printf("\nSoma de valores selecionados de a: %i", somaValores);
	printf("\nAgora, digite um outro valor para a[4]: ");
	scanf("%i", &a[4]);
	system("cls");
	printf("Vetor a: \n");
	for(i=0; i<6; i++){
		printf("\n%i ", a[i]);
	}
	return 0;
}
