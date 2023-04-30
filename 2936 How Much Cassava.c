#include<stdio.h>
int main(){
	int sum=0,i,n;
	int point[5] = {300,1500,600,1000,150};

	for(i=0; i<5; i++){
        scanf("%d",&n);
        sum = sum + (point[i]*n);
	}
	printf("%d\n",sum+225);
	return 0;
}
