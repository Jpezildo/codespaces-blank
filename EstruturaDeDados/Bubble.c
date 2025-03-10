#include <stdio.h>


void bubble_sort(int arr[], int n) {
    int i, j, temp;
    for (i = n - 1; i > 0; i--) {
        for (j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void bubble_sort_fim_ini(int n, int v[]) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            if (v[j] < v[j - 1]) {
                int aux = v[j];
                v[j] = v[j - 1];
                v[j - 1] = aux;
            }
        }
    }
}

void exibir_vetor(int n, int vet[]) {
    for (int i = 0; i < n; i++) {
        printf("[%d] ", vet[i]);
    }
    printf("\n");
}
    int main(void) {
        int v[] = {6, 5, 3, 1, 8, 7, 2, 4};
int n = sizeof(v) / sizeof(v[0]);;
        printf("Vetor original:\n");
        exibir_vetor(n, v);

        bubble_sort_fim_ini(n, v);

        printf("Vetor ordenado:\n");
        exibir_vetor(n, v);


return 0;

}