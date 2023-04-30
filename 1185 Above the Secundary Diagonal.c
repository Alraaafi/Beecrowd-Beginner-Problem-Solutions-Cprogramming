#include<stdio.h>
int main(){
    double M[12][12],sum=0,count=0,avg;
    char O;
    int i,j;
    scanf("%c",&O);

    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%lf",&M[i][j]);
        }
    }

    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            if(i+j<=10){
                sum = sum + M[i][j];
                count++;
            }
        }
    }
    avg = sum/count;
    if(O=='S'){
        printf("%.1lf\n",sum);
    }
    else if(O=='M'){
        printf("%.1lf\n",avg);
    }

}
