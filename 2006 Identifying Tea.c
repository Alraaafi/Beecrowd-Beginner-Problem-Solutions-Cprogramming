#include <stdio.h>
int main(){
    int T,tea[5],i,num=0;
    scanf("%d",&T);
    for(i=0; i<5; i++) scanf("%d",&tea[i]);

    for(i=0; i<5; i++){
        if(T==tea[i]) num++;
    }

    if(num==0) printf("%d\n",0);
    else printf("%d\n",num);

}
