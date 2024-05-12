#include <stdio.h>

void print_rec( int n){
if(n==0) return;
if(n==1){
    printf("%d",n);
}else{
    printf("%d ",n);
}
print_rec(n-1);
}

int main(){
  int n;
  scanf("%d",&n);
  print_rec(n);
 return 0;
}