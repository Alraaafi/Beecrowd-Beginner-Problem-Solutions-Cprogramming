#include <stdio.h>
int main()
{
    int a, b,h;
    scanf("%d%d",a,b);

    if(a>b){
        h = 24-a+b;
        printf("O JOGO DUROU %d HORA(S)\n",h);
    }
    else if(a<b){

        h = b-a;
        printf("O JOGO DUROU %d HORA(S)\n",h);
    }
    else{
        printf("O JOGO DUROU %d HORA(S)\n",24);
    }

}
