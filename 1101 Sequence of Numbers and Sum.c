#include <stdio.h>

int main()
{
    int a,b;
    while(1){
    scanf("%d %d", &a,&b);
    if(a==b){
       break;
       }
    if(b<a){
            printf("Decrescente\n");
    }
    else{
        printf("Crescente\n");
    }


    }
    return 0;
}
