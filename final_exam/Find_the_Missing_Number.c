#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        long long int M;
        int a, b, c;
        scanf("%lld %d %d %d", &M, &a, &b, &c);

        if (a == 0 || b == 0 || c == 0) {
            printf("-1\n");
            continue;
        }

        long long int three_sum = (long long int)a * b * c;
        long long int fourthNum = M / three_sum;

        if (a * b * c * fourthNum == M) {
            printf("%lld\n", fourthNum);
        } else {
            printf("-1\n");
        }
    }
    return 0;
}
