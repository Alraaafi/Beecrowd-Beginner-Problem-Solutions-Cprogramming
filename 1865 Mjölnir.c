#include <stdio.h>
int main()
{
    char nm[],T[]="Thor";
    int cs,i,force,compare;

    scanf("%d",&cs);
    for(i=1; i<=cs; i++){
        scanf("%s",nm);
        scanf("%d",&force);
        compare = strcmp(nm,T);
        if(compare==0) printf("Y\n");
        else printf("N\n");
    }


    return 0;
}
