#include <stdio.h>
#include <stdlib.h>

int getMaxSequence(int* vetor, int n){
  // maximo e contador começam como 1 pois o pior caso é a sequência ser de só 1 elemento
  int maximo = 1, contador = 1; // O(1)

  for (int i = 1; i < n; i++){ //O(n)
    if(vetor[i-1] < vetor[i]){ 
      contador++;
      if (contador > maximo){ maximo = contador; }
    
    }else{
      contador = 1;
    }
  }
  return maximo;
}
// Função executa em O(n)


int main(void){

  int *vetorDinamico;
  int qtdElementos;

  printf("Insira a quantidade de elementos: ");
  scanf("%d", &qtdElementos);

  vetorDinamico = (int *)malloc(qtdElementos * sizeof(int));

  printf("Insira os elementos posição por posição: \n");
  for (int i = 0; i < qtdElementos; i++){
    printf("Insira o elemento na posição %d: ", i);
    scanf("%d", &vetorDinamico[i]);
  }

  printf("Comprimento crescente máximo alcançado: %d\n", getMaxSequence(vetorDinamico, qtdElementos)); 

  free(vetorDinamico);
  printf("Memória liberada. Fim da execução!\n");
  return 0;
}