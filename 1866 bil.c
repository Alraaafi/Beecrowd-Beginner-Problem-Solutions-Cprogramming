#include <stdio.h>
int main()
{
    int i,cas,num;

    scanf("%d",&cas);
    for(i=1; i<=cas; i++){
        scanf("%d",&num);
        if(num%2!=0) printf("%d\n",1);
        else printf("%d\n",0);
    }


    return 0;
}
