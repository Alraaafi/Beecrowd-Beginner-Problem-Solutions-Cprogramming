#include<stdio.h>
int main(){
	float i,j,k;

	for(i=0;i<2.1;i=i+0.2){
            for(j=i+1 ;j<=i+3 ;j++){
        printf("I=%.1f J=%.1f\n",i,j);
	}

	}
	return 0;
}
