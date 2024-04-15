#include <stdio.h>

int main(){
 int num;
 scanf("%d",&num);
 if(num==1) {
    printf("-1\n");
 }else{
    for(int i=1;i<=num;i++){
    if(num%2==0){
        printf("%d\n",num);
    }
}
 }
 return 0;
}