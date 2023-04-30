#include<stdio.h>
int main()
{
    int x,i,j,k,sum = 0;
   scanf("%d",&x);
   for(i=1,k=1; i<=x,k<=x*4; i++,k=k+4){

     for(j=k; j<k+3; j++){
     printf("%d ",j);
    }
    printf("PUM\n");
}
 return 0;
}
