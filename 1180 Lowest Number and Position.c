#include<stdio.h>
int main(){
	int N,i,min,temp,pos;
	scanf("%d",&N);
	int X[N];

	for(i=0; i<N; i++){
        scanf("%d",&X[i]);
	}

    temp = X[0];
	for(i=0; i<N; i++){
            if(temp>=X[i]){
                temp = X[i];
                pos = i;
            }
            min = temp;
	}
	printf("Menor valor: %d\n",min);
	printf("Posicao: %d\n",pos);

	return 0;
}
