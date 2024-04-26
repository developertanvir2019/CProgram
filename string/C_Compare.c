#include <stdio.h>
#include <string.h>

int main(){
 char x[21],y[21];
 scanf("%s %s",x,y);
 int value= strcmp(x,y);
 if(value>0){
    printf("%s\n",y);
 }else if(value<0){
      printf("%s\n",x);
 }else{
     printf("%s\n",x); 
 }
 return 0;
}