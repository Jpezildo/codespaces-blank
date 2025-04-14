#include <stdio.h>
#include <stdlib.h>

int filho_esq (int i) {
    return 2*i + 1;
}

int filho_dir(int i) {
    return 2*i +2;
}

void heap_max(int n, int arr[n], int i) {
    int i_maior = i;
    int i_esq, i_dir, temp;
    while (i_maior < n) {
        i_esq = filho_esq(i); 
        i_dir = filho_dir(i);
        if(i_esq < n && arr[i_esq] > arr[i_maior]) {
            i_maior = i_esq;
        }
        if(i_dir < n && arr[i_dir] > arr[i_maior]) {
            i_maior = i_dir;
        }
        if(i!= i_maior) {
            temp = arr[i];
            arr[i] = arr[i_maior];
            arr[i_maior] = temp;
            i = i_maior;
        }else{
            break;
        }
    }
}
void construi_heap (int n, int arr [n]) {
for (int i = (n/2) -1; i>= 0; i--) {
    heap_max(n,arr,i);
}
 
}


void heap_sort (int n, int arr[n]) {
    int i,temp;
    contruir_heap(n,arr);
    for (i = n-1; i > 0; i--) {
        temp = arr[i];
        arr[i] = arr[0];
        arr[0] = temp;
        heap_max(n,arr,0);
        ajusta_heap(i, arr, 0);
    }
}

int main() {
    int arr[8] = (6,5,3,1,8,7,2,4);
exibir_vetor (8,arr);
heap_sort(8,arr);
exibir_vetor(8,arr);
return 0;
}







}

