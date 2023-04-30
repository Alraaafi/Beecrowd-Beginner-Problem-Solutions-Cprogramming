#include<stdio.h>
int main(){
	int T,i,j,N,fst=0,scnd=1;
	int fib[60];
	scanf("%d",&T);
	for(i=1; i<=T; i++){
        scanf("%d",&N);
        for(j=0; j<=N; j++){

            if(j<=1){
                fib[j] = j;
            }else{
            fib[j] = fst + scnd ;
            fst = scnd;
            scnd = fib[j];
            }
        }
        fst = 0;
        scnd = 1;
        printf("Fib(%d) = %d\n",N,fib[j-1]);
	}


	return 0;
}
