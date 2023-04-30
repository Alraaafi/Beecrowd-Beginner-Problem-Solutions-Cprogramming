#include <stdio.h>
int main(){
    int h,m;
    char ch;
    while(scanf("%d%c%d",&h,&ch,&m)!=EOF){
            printf("Atraso maximo: ");
        if(h<7 || (h==7 && m==0)) printf("0\n");
        else printf("%d\n", ((h+1)-8)*60 + m);
    }
}
