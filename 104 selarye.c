#include <stdio.h>
int main()
{
    float n,earn,newSl;
    int rate;
    scanf("%f",&n);
    if(n>=0 && n<=400.00){
        rate = 15;
        earn = n*0.15;
        newSl = earn + n;
    }
    else if(n>=400.01 && n<=800.00){
        rate = 12;
        earn = n*0.12;
        newSl = earn + n;
    }
    else if(n>=800.0 && n<=1200.00){
        rate = 10;
        earn = n*0.1;
        newSl = earn + n;
    }
    else if(n>=1200.01 && n<=2000.00){
        rate = 7;
        earn = n*0.07;
        newSl = earn + n;
    }
    else if(n<2000.00){
        rate = 4;
        earn = n*0.04;
        newSl = earn + n;
    }

printf("Novo salario: %.2f\n",newSl);
printf("Reajuste ganho: %.2f\n",earn);
printf("Em percentual: %d %%\n",rate);


    return 0;

}
