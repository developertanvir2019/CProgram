#include <stdio.h>

int main() {
    int x, p;
    scanf("%d %d", &x, &p);
float payingPercent= 100-x;
double oldPrice=(p/payingPercent)*100;

    
    printf("%.2f", oldPrice);

    return 0;
}
