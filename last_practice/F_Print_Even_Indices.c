#include <stdio.h>

void printEvenReversed(int *arr, int size, int index) {
 if(index<0)return;
        printf("%d ", arr[index]);
        printEvenReversed(arr, size, index - 2);
    
}


int main() {
    int N;
    scanf("%d", &N);
    
    int A[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    printEvenReversed(A, N, (N % 2 == 0) ? N - 2 : N - 1);
    return 0;
}