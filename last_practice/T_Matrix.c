#include <stdio.h>
#include <stdlib.h> // Include <stdlib.h> for abs() function

int main() {
    int n;
    scanf("%d", &n);
    int matrix[n][n]; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int primary = 0;
    int secondary = 0;
    for (int i = 0; i < n; i++) {
        primary += matrix[i][i];
        secondary += matrix[i][n - 1 - i]; 
    }

    int difference = abs(primary - secondary);

    printf("%d", difference);

    return 0;
}
