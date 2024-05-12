#include <stdio.h>

int main(){
 int N,M;
 scanf("%d %d",&N,&M);
 if(N!=M){
    printf("NO");
   return;
 } 

int A[N][M];
for(int i=0;i<N;i++){
    for(int j=0;j<M;j++){
        scanf("%d",&A[i][j]);
    }
}

int flag=1;
for(int i=0;i<N;i++){
    for(int j=0;j<M;j++){
      if(i==j ||i+j==N-1){
 if(A[i][j]!=1){
            flag=0;
        }
      }else{

        if(A[i][j]!=0){
            flag=0;
        }
      }
    }
}

if(flag==1){
    printf("YES");
}else{
    printf("NO");
}
 return 0;
}