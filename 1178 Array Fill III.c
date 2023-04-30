#include<stdio.h>
int main(){
	double X,N[100],hf;
	int i;
	scanf("%lf",&X);
	for(i=0;i<100;i++){
        if (i==0) {
            N[i] = X;
        }
        else {
                X = X/2;
                N[i] = X;
        }
}


    for(i=0;i<100;i++){
        printf("N[%d] = %.4lf\n",i,N[i]);
}

	return 0;
}
