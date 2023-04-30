#include<stdio.h>
int main(){
	int x,y,i,N;
	double div;
	scanf("%d",&N);

	for(i=1; i<=N; i++){

    scanf("%d%d",&x,&y);
    if(y==0){
        printf("divisao impossivel\n");
    }
    else{
        div = (double)x/(double)y;
        printf("%.1lf\n",div);
    }
	}

	return 0;
}
