#include <stdio.h>
#include <limits.h>

int main(){
 int n;
 scanf("%d",&n);
 int arr[n];
 for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
 } 
 int min=INT_MAX,pos;
 for(int i=0;i<n;i++){
   if(min>arr[i]){
min=arr[i];
pos=i;
   }
 } 
 printf("%d %d",min,pos+1);

 return 0;
}