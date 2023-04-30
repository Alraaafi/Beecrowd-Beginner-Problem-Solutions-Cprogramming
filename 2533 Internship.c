#include <stdio.h>
int main(){
    int num1,num2,sum1=0,sum2=0,n,i;
    double ans;
    while(scanf("%d",&n)!=EOF){
        for(i=1; i<=n; i++){
            scanf("%d%d",&num1,&num2);
            sum1 = sum1 + (num1 * num2) ;
            sum2 = sum2 + num2 ;
        }
        ans = (double)sum1/(sum2*100);
        printf("%.4lf\n",ans);

        sum1=0;
        sum2=0;
    }
    return 0;
}
