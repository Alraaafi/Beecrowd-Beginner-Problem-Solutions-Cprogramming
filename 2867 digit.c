#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,x,y;
    scanf("%d",&n);

    for(i=0; i<=n;i++){
    scanf("%d%d",&x,&y);
    double lg=log(x);
    printf("%d\n",log(x));
        lg*=y;
    //printf("%d\n",floor(lg)+1);
    printf("%d\n",lg);

    }

}
