#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    double sq=0;

    for(i=1; i<=n; i++){
        sq = 1/(2+sq);
    }
    printf("%.10lf\n",sq+1);
    //©Alraaafi
}
