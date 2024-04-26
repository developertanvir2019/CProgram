#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int A[N];
    int count[M + 1]; // Initialize count array with size M+1, index 0 will not be used

    // Initialize count array with zeros
    for (int i = 0; i <= M; i++) {
        count[i] = 0;
    }

    // Read array A and count occurrences
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
        count[A[i]]++; // Increment count for current number
    }

    // Print the counts for each number from 1 to M
    for (int i = 1; i <= M; i++) {
        printf("%d\n", count[i]);
    }

    return 0;
}
