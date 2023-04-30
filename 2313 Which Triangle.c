#include <stdio.h>
int main()
{
    long long int n1,n2,n3,max,min1,min2,root;
    //double root;
    scanf("%lld%lld%lld",&n1,&n2,&n3);

    if(n1>n2 && n1>n3){
        max = n1;
        min1 = n2;
        min2 =n3;
    }
    else if(n2>n1 && n2>n3){
        max = n2;
        min1 = n1;
        min2 =n3;
    }
    else{
        max = n3;
        min1 =n1;
        min2 = n2;
    }

    if( (min1+min2) <= max){
        printf("Invalido\n");
    }
    else{
            if(n1==n2 && n1==n3) printf("Valido-Equilatero\n");
            else if(min1 == min2 && min1!=max) printf("Valido-Isoceles\n");
            else printf("Valido-Escaleno\n");

            root = (min1*min1)+(min2*min2);

            if((max*max) == root) printf("Retangulo: S\n");
            else            printf("Retangulo: N\n");
    }
}


/*

#include <stdio.h>

int max(int a, int b)
{
    return ((a>b) ? a: b);
}
int min(int a, int b)
{
    return  (a<b) ? a: b;
}
int main()
{
    long long int a, b, c, x, y, z;
    scanf("%lld %lld %lld", &a, &b, &c);
    x = max(a, max(b, c));
    z = min(a, min(b, c));
    y = a + b + c - x - z;
    if(x >= y+z) printf("Invalido\n");
    else
    {
        if(x==y && y==z) printf("Valido-Equilatero\n");
        else if(x!=y && y!=z && x!=z) printf("Valido-Escaleno\n");
        else printf("Valido-Isoceles\n");
        if(x*x == (y*y + z*z)) printf("Retangulo: S\n");
        else printf("Retangulo: N\n");
    }
    return 0;
}

*/
