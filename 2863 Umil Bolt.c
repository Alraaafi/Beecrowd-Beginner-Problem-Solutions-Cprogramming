#include<stdio.h>
int main()
{
    int n;
    double time;

    while(scanf("%d",&n)!=EOF){
    double fast =  12.00;

    while(n--){
        scanf("%lf",&time);
        if(time<fast){
            fast = time;
        }
    }
    printf("%.2lf\n",fast);

    }

}
