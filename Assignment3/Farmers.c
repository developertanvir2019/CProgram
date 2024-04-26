#include <stdio.h>

int main(){
int t;
scanf("%d",&t);
for(int i=0;i<t;i++){
int m1,m2,d;
scanf("%d %d %d",&m1,&m2,&d);
int totalPerson=m1+m2;
int workingDays=(m1*d)/totalPerson;
int remainingDay=d-workingDays;
printf("%d\n",remainingDay);

}

 return 0;
}