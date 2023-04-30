#include<stdio.h>
int main()
{
    double M[12][12],sum=0,avg;
    int col;
    char ch;
    scanf("%d %c",&col,&ch);
    int i,j;
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%lf",&M[i][j]);
        }
    }

        for(i=0; i<12; i++) sum = sum + M[i][col];

        avg = sum/12;
        if(ch=='S') printf("%.1lf\n",sum);
        else if(ch=='M') printf("%.1lf\n",avg);

}
