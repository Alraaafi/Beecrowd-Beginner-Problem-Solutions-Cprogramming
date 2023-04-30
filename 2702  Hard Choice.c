#include<stdio.h>
int main(){
    int have[3],order[3],i,sum=0;

    for(i=0; i<3; i++){
        scanf("%d",&have[i]);
    }

    for(i=0; i<3; i++){
        scanf("%d",&order[i]);
    }

    for(i=0; i<3; i++){
        if(have[i]<order[i]) sum = sum + order[i]-have[i];
    }

    printf("%d\n",sum);
  return 0;
  //Alraaafi
}
