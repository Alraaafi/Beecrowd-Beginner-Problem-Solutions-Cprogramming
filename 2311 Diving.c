#include <stdio.h>
int main()
{
    int cs,i,j;
    char nam[501];
    double d,sqr[7],max,min,sum=0.0;

    scanf("%d",&cs);

    for(j=1; j<=cs; j++){

        //fflush(stdin);
        scanf("%s",&nam);
        scanf("%lf",&d);
        for(i=0; i<7; i++) scanf("%lf",&sqr[i]);

        max = sqr[0];
        min = sqr[0];
         for(i=1; i<7; i++){
            if(max<sqr[i]) max = sqr[i];
            if(min>sqr[i]) min = sqr[i];
            }

       for(i=0; i<7; i++){
            if(sqr[i]==max || sqr[i]==min) continue;
            sum = sum + sqr[i];
       }

       printf("%s ",nam);
       printf("%.2lf\n",sum*d);

        sum=0.0 ;

    }

}
