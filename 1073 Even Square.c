#include<stdio.h>
int main()
{
    int N,sq,i;
    scanf("%d",&N);

    if(N>5 && N<2000){
        for(i=2;i<=N;i=i+2){
            sq = i*i;
            printf("%d^%d = %d\n",i,2,sq);
        }
    }
}

