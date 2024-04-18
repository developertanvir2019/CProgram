#include <stdio.h>

int main(){
 int a;
 scanf("%d",&a);
 int left=a/10;
 int right=a%10;
 if(left%right==0 ||right%left==0){
    printf("YES");
 }else{
    printf("NO");
 }
 return 0;
}