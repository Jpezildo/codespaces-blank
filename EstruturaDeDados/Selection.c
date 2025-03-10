#include <stdio.h>

void selection_sort(int v[], int n) {
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {  
            if (v[j] < v[min]) {
                min = j;
            }
        }
       
        if (min != i) {  
            temp = v[min];
            v[min] = v[i];
            v[i] = temp;
        }
    }
}


void exibir_vetor(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main(void) {
    int v[] = {6, 5, 3, 1, 8, 7, 2, 4}; 
    int n = sizeof(v) / sizeof(v[0]);   

    printf("Vetor original:\n");
    exibir_vetor(v, n);

    selection_sort(v, n); 

    printf("Vetor ordenado (Selection Sort):\n");
    exibir_vetor(v, n);

    return 0;
}