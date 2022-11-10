#include <iostream>
using namespace std;

void troca(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void printVetor(int vetor[], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    cout << vetor[i] << " ";
  }
  cout << endl;
}

void selectionSort(int vetor[], int tamanho) {
  for (int step = 0; step < tamanho - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < tamanho; i++) {

      if (vetor[i] < vetor[min_idx])
        min_idx = i;
    }
    troca(&vetor[min_idx], &vetor[step]);
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
  selectionSort(vetor, tamanho);
  printf("Sorteando os números em ordem crescente:\n");
  printVetor(vetor, tamanho);
}
