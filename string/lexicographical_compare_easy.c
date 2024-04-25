#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[100];
    scanf("%s %s",a,b);
  int val= strcmp(a,b);
 if(val>0){
    printf("a boro");
 }else if(val<0){
printf("b boro"); 
 }else{
    printf("shoman");
 }
 return 0;
}