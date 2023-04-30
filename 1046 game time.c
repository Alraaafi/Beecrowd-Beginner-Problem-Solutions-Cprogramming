#include <stdio.h>
int main()
{
    int h1,m1,h2,m2,M,H;
    scanf("%d %d %d %d", &h1,&m1,&h2,&m2);
    H = h2-h1;
    if(H<0){
        H = (24-h1)+h2;
    }
    M = m2-m1;
    if(M<0){
        M = (60-m1)+m2;
        H--;
    }
    if(m1==m2 && h1 ==h2){
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24,0);
    }
    else{
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",H,M);
    }

    return 0;

}
