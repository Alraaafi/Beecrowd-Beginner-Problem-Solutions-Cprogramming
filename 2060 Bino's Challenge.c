#include<stdio.h>
int main(){
int N,i,num,count2=0,count3=0,count4=0,count5=0;
scanf("%d",&N);
for(i=1; i<=N; i++){
    scanf("%d",&num);
    if(num%2==0) count2++;
    if(num%3==0) count3++;
    if(num%4==0) count4++;
    if(num%5==0) count5++;
}
printf("%d Multiplo(s) de 2\n",count2);
printf("%d Multiplo(s) de 3\n",count3);
printf("%d Multiplo(s) de 4\n",count4);
printf("%d Multiplo(s) de 5\n",count5);

return 0;
}
