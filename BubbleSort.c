#include <stdio.h>
void bubbleSort(int vetor[], int tamanho) {
  for (int step = 0; step < tamanho - 1; ++step) {
    for (int i = 0; i < tamanho - step - 1; ++i) {
      if (vetor[i] > vetor[i + 1]) {
        int temp = vetor[i];
        vetor[i] = vetor[i + 1];
        vetor[i + 1] = temp;
      }
    }
  }
}

void printVetor(int Vetor[], int tamanho) {
  for (int i = 0; i < tamanho; ++i) {
    printf("%d  ", Vetor[i]);
  }
  printf("\n");
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
  bubbleSort(vetor, tamanho);
  printf("Sorteando o vetor em ordem crescente:\n");
  printVetor(vetor, tamanho);
}
