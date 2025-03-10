#include <stdio.h>

void insertion_sort(int arr[], int n) {
int i, j , min, temp;
for ( i = 0; i < n-1; i++) {
    int j = i+1;
    int aux = arr[j];
while (j>0 && arr[j-1] > aux) {
arr[j] = arr[j-1];
j--;
arr[j] = aux;
}
}
}







int main(void) {
int vet[8] = {6,5,3,1,8,7,2,4}
printf"([%d],\n");    
printf("\n");





return 0;
}