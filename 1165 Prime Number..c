#include<stdio.h>
int main()
{
    int Num,n,i,j,count=0;
    scanf("%d",&n);
        for(i=1; i<=n; i++){
            scanf("%d",&Num);
            count=0 ;
            for(j=2;j<Num;j++){
                if(Num%j==0){
                    count++;
                }
            }
            if(count==0){
                printf("%d eh primo\n",Num);
            }
            else printf("%d nao eh primo\n",Num);
        }
   return 0;
}
