#include <stdio.h>
int main( ){
    int L,C,hf,full;
    scanf("%d %d",&L,&C);
    hf = 2*(L-1) + 2*(C-1);
    full = (2*L*C)-(hf/2)-1;
    printf("%d\n%d\n",full,hf);
    //Alraaafi
    }
