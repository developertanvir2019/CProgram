#include <stdio.h>

int main(){
 int n;
 scanf("%d",&n);
 int arr[n];
 for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
 } 
 int x;
 scanf("%d",&x);
 int ans=-1;
 for(int j=0;j<n;j++){
    if(arr[j]==x){
ans=j;
break;
    }
 }
        printf("%d",ans);
 return 0;
}