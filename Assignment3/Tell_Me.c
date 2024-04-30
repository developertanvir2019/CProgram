#include <stdio.h>

int main(){
 int  t;
 scanf("%d",&t);
 for(int i=0;i<t;i++){
   int n;
scanf("%d",&n);
int a[10000];
for(int j=0;j<n;j++){
scanf("%d",&a[j]);
}
int x;
scanf("%d",&x);

int isYes=0;
for(int k=0;k<n;k++){
    if(a[k]==x){
        isYes=1;
        printf("YES\n");
        break;
    }
}
if(!isYes){
    printf("NO");
}
 }
 return 0;
}