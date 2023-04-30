#include <stdio.h>
#include <math.h>
int main(){

    double fib,num,a,b,c;
    scanf("%lf",&num);

    c = sqrt(5);
    a = (1+c)/2.0 ;
    b = (1-c)/2.0 ;

    fib = ( pow(a,num) - pow(b,num) )/c;

    printf("%.1lf\n",fib);

    //©Alraaafi
}
