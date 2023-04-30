#include <stdio.h>
#include <math.h>
void isPrime(int n){
    int i,count=0;
    if(n<2){
        printf("Not prime Number!!\n");
    }
    else if(n==2){
        printf("P\tR\tI\tN\tM\tE\t\t N\tU\tM\tB\tE\tR!!\n");
    }
    else if(n%2==0){
        printf("Not prime Number!!\n");
    }else{
        for(i=3; i<=sqrt(n); i=i+2){
            if(n%i==0) count++;
        }
        if(count==0) printf("P\tR\tI\tN\tM\tE\t\t N\tU\tM\tB\tE\tR!!\n");
        else printf("Not prime Number!!\n");
    }

}
int main()
{
    isPrime(2147483647);
    isPrime(11);
    isPrime(77);
    isPrime(23);
    isPrime(44);
    isPrime(41);
}
