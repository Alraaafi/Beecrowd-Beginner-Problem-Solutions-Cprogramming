#include<stdio.h>
int main(){
    int X,Y,N,i=0;
    scanf("%d",&N);
    while(i<=N){
        scanf("%d %d",&X,&Y);
        int temp,sum=0,i;
        if(X>Y){
            temp = X;
            X = Y;
            Y = temp;
        }
        if(X%2==0 && Y%2==0){
            for(i=X+1; i<Y; i=i+2){
                sum = sum+i;
            }
        }
        else if(X%2!=0 && Y%2==0){
            for(i=X+2; i<Y; i=i+2){
                sum = sum+i;
            }
        }
        else if(X%2==0 && Y%2!=0){
            for(i=X+1; i<Y-1; i=i+2){
                sum = sum+i;
            }
        }
        else if(X%2!=0 && Y%2!=0){
            for(i=X+2; i<Y-1; i=i+2){
                sum = sum+i;
            }
        }else{
            sum = 0;
        }



        printf("%d\n",sum);

        i++;
    }

    return 0;
}
