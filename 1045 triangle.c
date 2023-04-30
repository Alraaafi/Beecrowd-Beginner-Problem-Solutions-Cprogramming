#include <stdio.h>
int main()
{
    int a, b, duer;
    scanf("%d %d", &a, &b);

    if(a>b){
        duer = (24-a)+b;
    }
    else if(a<b){
        duer = b - a;
    }
    else if(a==b){
        duer = 24;
    }
    printf("O JOGO DUROU %d HORA(S)\n",duer);
    return 0;

}
