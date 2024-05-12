#include <stdio.h>

int main(){
 int n;
 scanf("%d",&n);
int firstPart= 6;
for (int i=3;i<=n;i+=2){
    if(i%2!=0){
        firstPart++;
    }
}

// print first part
int star=1;
int space=firstPart-1;
for(int i=0;i<firstPart;i++){
    for(int i=1;i<=space;i++){
    printf(" ");
    }
    for(int i=1;i<=star;i++){
    printf("*");
    }
    printf("\n");
    star+=2;
    space--;
}

// print Second Part
for(int i=0;i<5;i++){
    for(int i=1;i<=5;i++){
    printf(" ");
    }
    for(int i=1;i<=n;i++){
    printf("*");
    }
    printf("\n");
}

 return 0;
}