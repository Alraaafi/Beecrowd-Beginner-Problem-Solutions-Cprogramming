#include <stdio.h>

int main() {
    double A,B,C,temp;
    scanf("%lf%lf%lf", &A,&B,&C);
    // 1 2 3
    if (A < B) //1 2
    {
        temp = A;
        A = B;
        B = temp; //2 1 3
    }
    if (B < C) //1 3
    {
        temp = B;
        B = B;
        C = temp; //2 3 1
    }
    if (A < B) //2 3
    {
        temp = A;
        A = B;
        B = temp; //3 2 1
    }

    if(A >= (B + C)){
        printf("NAO FORMA TRIANGULO\n");
    }
    if( A*A == (B*B + C*C)){
        printf("TRIANGULO RETANGULO\n");
    }
    if( A*A > (B*B + C*C)){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if( A*A < (B*B + C*C)){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if( (A == B) && (B == C)){
        printf("TRIANGULO EQUILATERO\n");
    }
    if(((A==B) && (B!=C))|| ((B==C) && (C!=A))|| ((C==A) && (A!=B)))
    {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
