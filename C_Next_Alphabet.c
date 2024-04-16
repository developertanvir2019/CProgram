#include <stdio.h>

int main(){
 char ch;
 scanf("%c",&ch);
 if(ch=='z'){
printf("a");
 }else{
char next_char=ch+1;
printf("%c",next_char);
 }
 return 0;
}