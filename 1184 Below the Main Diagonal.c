#include<stdio.h>
int main()
{
    double M[12][12],sum=0,avg;
    char ch;
    scanf("%c",&ch);
    int i,j,count=0;
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%lf",&M[i][j]);
        }
    }

        for(i=0; i<12; i++){
            for(j=0; j<12; j++){
                if(i>j){
                    sum = sum + M[j][i];
                    count++;
                }
            }
        }
        avg = sum/count;
        if(ch=='S') printf("%.1lf\n",sum);
        else if(ch=='M') printf("%.1lf\n",avg);

}
