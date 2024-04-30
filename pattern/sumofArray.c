#include <stdio.h>

int main(){
 int n;
 scanf("%d",&n);
 int A[n];
 for(int i=0;i<n;i++){
    scanf("%d",&A[i]);
 } 
 int iSum;
 scanf("%d",&iSum);

int sum=0;
 for(int i=0;i<n;i++){

  for(int j=i+1;j<n;j++){
sum=A[i]+A[j];
if(iSum==sum){
    printf("%d %d",A[i],A[j]);
}

  }

 } 



 return 0;
}