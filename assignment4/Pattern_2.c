#include <stdio.h>

int main(){
 int n;
 scanf("%d",&n);
 int space=n-1;
 int num=1;
 for(int i=1;i<=n;i++){
    for(int j=1;j<=space;j++){
        printf(" ");
    }
for(int j=num; j>0;j--){
printf("%d",j);
}

printf("\n");
space=space-1;
num=num+1;

 } 
 return 0;
}