#include<stdio.h>
int main(){
    int i,count = 0;
    char str[8],d[2],m[2],y[2];
    scanf("%s",str);
    d[0] = str[0];
    d[1] = str[1];

    m[0] = str[3];
    m[1] = str[4];

    y[0] = str[6];
    y[1] = str[7];

    printf("%c%c/%c%c/%c%c\n",m[0],m[1],d[0],d[1],y[0],y[1]);
    printf("%c%c/%c%c/%c%c\n",y[0],y[1],m[0],m[1],d[0],d[1]);
    printf("%c%c-%c%c-%c%c\n",d[0],d[1],m[0],m[1],y[0],y[1]);

}

