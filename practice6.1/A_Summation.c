#include <stdio.h>

int main(){
 int n;
 scanf("%d",&n);
  int arr[n];
  long long int sum=0;
  for(int i=1;i<=n;i++){
    scanf("%d",&arr[i]);
sum +=arr[i];
  }
if(sum<0){
    printf("%lld",sum*-1);
}else{
    printf("%lld",sum);
}
 return 0;
}