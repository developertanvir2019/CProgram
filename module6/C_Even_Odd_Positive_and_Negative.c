#include <stdio.h>
int main() {
    int N, num;
    int even = 0, odd = 0, positive = 0, negative = 0;
    // Read the value of N
    scanf("%d", &N);
    // Loop to read N numbers
    for (int i = 0; i < N; i++) {
        // Read each number
        scanf("%d", &num);
        // Check if the number is even
        if (num % 2 == 0)
            even++;
        else
            odd++;
        // Check if the number is positive or negative
        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
    }

    // Output the results
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);

    return 0;
}
