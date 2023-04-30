#include<stdio.h>
int main(){
    int sq[9],i,sum=0,rem;
    for(i=0; i<9; i++){
        scanf("%d",&sq[i]);
    }

    for(i=0; i<9; i++){
        sum = sum + sq[i];
    }
    rem = sum%9;

    if(rem==1) printf("Dasher\n");
    else if(rem==2) printf("Dancer\n");
    else if(rem==3) printf("Prancer\n");
    else if(rem==4) printf("Vixen\n");
    else if(rem==5) printf("Comet\n");
    else if(rem==6) printf("Cupid\n");
    else if(rem==7) printf("Donner\n");
    else if(rem==8) printf("Blitzen\n");
    else if(rem==0) printf("Rudolph\n");

  return 0;
  //Alraaafi
}
