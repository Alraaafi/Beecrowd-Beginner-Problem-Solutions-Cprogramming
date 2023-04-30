#include<stdio.h>
int main()
{
    int n,i,j,x,y,nth,sum=0;

    scanf("%d",&n);
        for(i=1; i<=n; i++){
            scanf("%d %d",&x,&y);
            if(x%2==0){
                x++;
            }
            nth = x+(y-1)*2;
            for(j=x;j<=nth; j=j+2 ){
                sum = sum+j;
            }
            printf("%d\n",sum);
            nth = 0;
            sum = 0;

        }

   return 0;
}
