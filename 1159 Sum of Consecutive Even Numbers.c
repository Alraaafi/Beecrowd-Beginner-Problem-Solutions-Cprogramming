#include<stdio.h>
int main()
{
    int i,j,x,n,sum=0,half;
    scanf("%d",&n);
        for(i=1; i<=n; i++){

            scanf("%d",&x);
            sum = 0;
            half = 0;
            for(j=1 ; j<=x; j++){
                if(x%j==0){
                sum = sum+j;
            }
                half = sum/2;
            }
            if(half == x){
                printf("%d eh perfeito\n",x);
            }
            else printf("%d nao eh perfeito\n",x);

        }
   return 0;
}
