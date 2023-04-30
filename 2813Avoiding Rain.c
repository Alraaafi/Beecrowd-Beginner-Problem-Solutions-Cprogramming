#include<stdio.h>
int main(){
    int n,i,h,o,t1,t2;
    h=o=t1=t2=0;
    scanf("%d",&n);

    char CD[5],SN[5];
    for(i=1; i<=n; i++){
        scanf("%s %s",CD,SN);

        if(h!=t1 && CD[1]=='o' && SN[1]=='h') continue;
        if(o!=t2 && CD[1]=='h' && SN[1]=='o') continue;
            t1 = h;
            t2 = o;
        if(CD[1]=='o' && SN[1]=='h'){
            o++;
        }
        if(CD[1]=='h' && SN[1]=='o'){
           h++;

        }

    }

    printf("%d %d\n",h,o);

}
