#include <stdio.h>
int main()
{
    int count,temp = 0;
    int n,i;

    for(i=1;i<=100;i=i+1){
        scanf("%d",&n);

        if(n>temp){
            temp = n;
            count = i;
        }
    }
    printf("%d\n%d\n",temp,count);
    return 0;

}
