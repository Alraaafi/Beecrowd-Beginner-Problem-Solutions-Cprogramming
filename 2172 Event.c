#include <stdio.h>
int main(){
    int i;
    long long int n,ev;


    while(1){
        scanf("%d %lld",&i,&n);
        ev = i * n;
        if(i==0 && n==0) break;
        printf("%lld\n",ev);
    }
    //©Alraaafi
}
