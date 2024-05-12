#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
     int n;
      scanf("%d",&n);
       char s[n+1];
          scanf("%s",&s);
int path=0;
int tiger=0;
for(int i=0;i<n;i++){
    if(s[i]=='T'){
        tiger++;
    }else if(s[i]=='P'){
        path++;
    }
}
if(path>tiger){
    printf("Pathaan\n");
}else if(tiger>path){
    printf("Tiger\n");

}else{
    printf("Draw\n");
}
    }
    return 0;
}
