#include <stdio.h>

int main()
{
    long long unsigned n;
    while(1){
        scanf("%llu",&n);
        if(n == -1ll) break;
        if(n == 0ll) printf("0\n");
        else printf("%llu\n", n - 1ll);
    }
}
