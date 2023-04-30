#include<stdio.h>
int main()
{
    int i,j,num[15],even[5],odd[5],countEven=0,countOdd=0;
    for(i=0;i<15;i++){
        scanf("%d",&num[i]);
    }

    for(i=0;i<15;i++){
        if(num[i]%2==0){
            even[countEven] = num[i];
            printf("par[%d] = %d\n",countEven,even[countEven]);
            countEven++;
            j = i+1;
        }
        if(countEven==5){
                countEven = 0 ;
                break;
        }
    }

    for(i=0;i<15;i++){
        if(num[i]%2!=0){
            odd[countOdd] = num[i];
            printf("impar[%d] = %d\n",countOdd,odd[countOdd]);
            countOdd++;
        }
        if(countOdd==5) countOdd = 0;
    }

    for(i=j;i<15;i++){
        if(num[i]%2==0){
            even[countEven] = num[i];
            printf("par[%d] = %d\n",countEven,even[countEven]);
            countEven++;
        }
        if(countEven==5) countEven = 0;
    }

}
