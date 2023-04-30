#include<stdio.h>
int main(){
	float i,j;
	float s=1;
	for(i=3,j=2 ;i<=39,j<=10000; i=i+2,j=j*2){
        s = s+i/j;
	}
   printf("%.2f\n",s);
	return 0;
}
