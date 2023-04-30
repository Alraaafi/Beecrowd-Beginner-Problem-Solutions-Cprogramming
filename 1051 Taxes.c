#include <stdio.h>
int main()
{
    float n,tx;//tax
    scanf("%f",&n);
    if(n>=0 && n<=2000.00){
        printf("Isento\n");
    }
    else if(n>=2000.01 && n<=3000.00){
        tx = (n-2000.00)*0.08;
        printf("R$ %.2f\n",tx);
    }
    else if(n>=3000.01 && n<=4500.00){
        tx = ((n-3000.00)*0.18)+80.00;
        printf("R$ %.2f\n",tx);
    }
    else{
        tx = ((n-4500.00)*0.28)+350.00;
        printf("R$ %.2f\n",tx);
    }


    return 0;

}
