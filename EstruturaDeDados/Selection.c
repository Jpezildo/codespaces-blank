#include <stdio.h>

void selection_sort(int v[], int n) {
int i, j , min, temp;
for ( i = 0; i < n-1; i++) {
    min = i;
for (j = 0+1; j < n; j++) {
if (v[j] < v[min]) {
min = j;
}
}   
if(min !=0) {
int aux = v[min];
v[min] = v[0];
v[0] = aux; 
}
}
}








int main(void) {






return 0;
}