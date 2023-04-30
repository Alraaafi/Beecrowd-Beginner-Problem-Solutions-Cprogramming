#include <stdio.h>
int main( ){
    int cs,i,rem,sq=0;
    scanf("%d",&cs);
    int N[cs];

    for(i=0; i<cs; i++){
    scanf("%d",&N[i]);
    }

    int temp = N[0]-N[1];

    for(i=0; i<cs-1; i++){
        rem = N[i]-N[i+1];
        if(rem!=temp){
            sq++;
            //printf("%d\n",sq);
            temp = N[i]-N[i+1];
        }

    }

        printf("%d\n",sq+1);
        //Alraaafi
    }
