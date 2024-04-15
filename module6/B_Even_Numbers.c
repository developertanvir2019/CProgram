#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n==1) {
        printf("-1\n");
    } else {
        for(int i = 1; i <= n; i++) {
            if(i % 2 == 0) { // Check if the current iteration value (i) is even
                printf("%d\n", i); // Print the even number
            }
        }
    }
    return 0;
}
