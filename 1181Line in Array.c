#include<stdio.h>
int main()
{
    double M[2][2],sum=0,avg;
    int line;
    char ch;
    scanf("%d %c",&line,&ch);
    int i,j;
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            scanf("%lf",&M[i][j]);
        }
    }

        for(j=0; j<2; j++) sum = sum + M[line][j];

        avg = sum/2;
        if(ch=='S') printf("%.1lf\n",sum);
        else if(ch=='M') printf("%.1lf\n",avg);

}
