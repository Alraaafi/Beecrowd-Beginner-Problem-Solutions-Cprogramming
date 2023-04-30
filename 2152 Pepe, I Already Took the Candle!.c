#include<stdio.h>
int main(){
    int h,m,o,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d%d",&h,&m,&o);
        if(o==1)
            printf("%02d:%02d - A porta abriu!\n",h,m);
        else if(o==0)
            printf("%02d:%02d - A porta fechou!\n",h,m);

    }


    //©Alraaafi

}
