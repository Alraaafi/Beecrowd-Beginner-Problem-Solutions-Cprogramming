#include<stdio.h>
int main(){
	int i,N,fib;
	int num1=0,num2 = 1;
	scanf("%d",&N);
	if(N>0 && N < 46){
        for(i=1 ; i<=N; i++){

                fib = num1 + num2;
                num1 = num2 ;
                num2 = fib;

            printf("%d ",num1);
        }

	}

	return 0;
}
