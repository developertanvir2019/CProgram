#include <stdio.h>

void odd_even(){
 int n;
 scanf("%d",&n);
 int A[n];
 for(int i=0;i<n;i++){
    scanf("%d",&A[i]);
 } 

int odd=0;
int even=0;
 for(int i=0;i<n;i++){
  if(A[i]%2==0){
    even++;
  }else{
    odd++;
  }
 } 
 printf("%d %d",even,odd);
}


int main(){
 odd_even();
 return 0;
}
