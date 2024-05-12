#include <stdio.h>

long long int printEvenReversed(int *arr, int index,int size) {
    if(size==index){
        return 0;
    }
  return arr[index] + printEvenReversed(arr, index + 1, size);
}


int main() {
    int N;
    scanf("%d", &N);
    
    int A[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
long long int total=printEvenReversed(A, 0,N);
printf("%lld",total);
    return 0;
}