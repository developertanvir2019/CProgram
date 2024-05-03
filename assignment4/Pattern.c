#include <stdio.h>

int main(){
 int n;
 scanf("%d",&n);
 int hash=1;
 int dash=1;
 int space=n-1;
 for(int i=1;i<=(2*n)-1;i++){
    if(i%2!=0){
           for(int j=1; j<=space;j++){
        printf(" ");
        }
        for(int j=1; j<=hash;j++){
         
        printf("#");
        }
    }else{
     for(int j=1; j<=space;j++){
        printf(" ");
        }
     for(int j=1; j<=dash;j++){
        printf("-");
        }
    }
    printf("\n");

    if(i<n){
        hash=hash+2;
        dash=dash+2;
        space=space-1;
    }else {
hash=hash-2;
        dash=dash-2;
        space=space+1;
    }
 } 
 return 0;
}