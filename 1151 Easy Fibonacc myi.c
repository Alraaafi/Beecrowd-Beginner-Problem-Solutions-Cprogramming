#include<stdio.h>

int main()
{
int a,b,c,sum;
int i,j;
i=0;
j=1;

scanf("%d",&c);
for(a=1;a<c;a++){
printf("%d ",i);
sum=i+j;
i=j;
j=sum;
}
printf("%d\n",i);
return 0;
}
