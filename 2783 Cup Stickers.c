#include <stdio.h>
int main( ){
    int range,stpNums,purNums,i,j,found=0,t=0,miss;
    scanf("%d %d %d ",&range,&stpNums,&purNums);
    int stp[stpNums],pur[purNums];
    for(i=0; i<stpNums; i++) scanf("%d",&stp[i]);
    for(i=0; i<purNums; i++) scanf("%d",&pur[i]);

    for(i=0; i<stpNums; i++){
        for(j=0; j<purNums; j++){
            if(stp[i]==pur[j] && t==0) {
                found++;
                printf("%d-%d\n",stp[i],t);
                t = t + 1;

            }
        }
        t = 0;
    }
    miss = stpNums - found ;

    printf("%d\n",miss);


        //Alraaafi
    }
