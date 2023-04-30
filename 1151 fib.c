#include<stdio.h>
main()
{
    int fib,b,c,i,n;
    scanf("%d",&n);
    fib=0,b=1;

    for(i=1;i<n;i++)
    {
        printf("%d ",fib);
        c=fib+b;
        fib=b;
        b=c;

    }
    printf("%d\n",fib);
    return 0;
}

