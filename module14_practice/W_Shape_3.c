#include <stdio.h>

int main(){
 int n;
 scanf("%d",&n);
 int space=n-1;
 int star=1;
 for(int i=1;i<=(2*n);i++){

for(int j=1;j<=space;j++){
    printf(" ");
}
for(int j=1;j<=star;j++){
    printf("*");
}

printf("\n");
 if (i < n) {
            star += 2;
            space--;
        } else if(i==n){

        } else{
            star -= 2;
            space++;
        }

 } 
 return 0;
}