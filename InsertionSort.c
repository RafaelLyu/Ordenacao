#include <stdio.h>

void printVetor(int vetor[], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    printf("%d ", vetor[i]);
  }
  printf("\n");
}
void insertionSort(int array[], int tamanho) {
  for (int step = 1; step < tamanho; step++) {
    int key = array[step];
    int j = step - 1;

    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

int main() {

  int vetor[0];
  int tamanho;
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &tamanho);
  vetor[0]*tamanho;
  for(int i= 0; i < tamanho;i++ ){
    printf("Digite o %dº número do vetor:" , i+1);
    scanf("%d", &vetor[i]);
    }
  insertionSort(vetor, tamanho);
  printf("Sorteando os números em ordem crescente:\n");
  printVetor(vetor, tamanho);
}
