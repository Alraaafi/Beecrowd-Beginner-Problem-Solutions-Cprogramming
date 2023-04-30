#include<stdio.h>
int main(){
    char in[3];
    scanf("%c %c %c",&in[0],&in[1],&in[2]);
    printf("A = %c, B = %c, C = %c\n",in[0],in[1],in[2]);
    printf("A = %c, B = %c, C = %c\n",in[1],in[2],in[0]);
    printf("A = %c, B = %c, C = %c\n",in[2],in[0],in[1]);
}
