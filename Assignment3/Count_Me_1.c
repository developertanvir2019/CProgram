#include <stdio.h>

int main(){
int N;
scanf("%d",&N); 
int A[N];
for(int i=0;i<N;i++){
    scanf("%d",&A[i]);
}
int twoDiv=0;
int threeDiv=0;
for(int i=0;i<N;i++){
    if(A[i]%2==0){
        twoDiv++;
    }else if(A[i]%3==0 && A[i]%2!=0){
threeDiv++;
    }
}
printf("%d %d",twoDiv,threeDiv);
 return 0;
}