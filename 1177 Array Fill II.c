#include<stdio.h>
int main(){
	int T,i,j;
	scanf("%d",&T);
	for(i=0,j=0; i<1000; i++){
        printf("N[%d] = %d\n",i,j);
        j++;
        if(j==T) j = 0;
	}

	return 0;
}
