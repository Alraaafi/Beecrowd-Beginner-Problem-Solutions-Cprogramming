#include<stdio.h>
int main(){
    int i,N,T;
    scanf("%d",&N);
    for(i=1; i<=N; i++){
        scanf("%d",&T);
        if(T>=2015){
           printf("%d A.C.\n",T - 2014);
        }
        else{
            printf("%d D.C.\n",2015 - T);
        }
    }

}
