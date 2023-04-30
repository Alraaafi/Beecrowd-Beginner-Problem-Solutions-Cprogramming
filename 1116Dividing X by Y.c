#include<stdio.h>
int main(){

	double X,sum=0;
	int count = 0;
	while(1){
	scanf("%lf",&X);
	if(X>=0 && X<=10){
        sum = sum + X;
        count++;
	}
	else{
        printf("nota invalida\n");
	}
	if(count==2){
        break;
        }
	}
	printf("media = %.2lf\n",sum/2);

	return 0;
}
