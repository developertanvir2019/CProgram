#include <stdio.h>
#include <string.h>

int main(){
int t;
scanf("%d",&t);
for(int i=0;i<t;i++){
     char s[ 10001];
 scanf("%s",&s); 
 int capit=0,small=0,num=0;
 for(int i=0;i<strlen(s);i++){
  if(s[i]>= 97 && s[i]<=122){
    small++;
  }else if(s[i]>= 65 && s[i]<=90){
    capit++;
  }else{
    num++;
  }
 }
printf("%d %d %d\n",capit,small,num);
}
 return 0;
}