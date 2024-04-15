#include <stdio.h>

int main(){
 int count;
 int num,max=0;
 scanf("%d",&count);
 for(int i=1;i<=count; i++){
    scanf("%d",&num);
if(max<num){
    max=num;
}
 } 
 printf("%d",max);
 return 0;
}