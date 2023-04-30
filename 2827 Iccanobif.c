#include<stdio.h>
int main(){
    int i,n,num;
    scanf("%d",&n);
    int trm[n],revTrm[n];
    int first = 1;
    int second= 1;

    for(i=0; i<n; i++){
    if(i<=1){
        trm[i] = first;
    }
    else{
        trm[i] = first + second;
        first = second;
        second = trm[i];
    }
    }
    int j = n;
    for(i=0; i<n; i++){
        j--;
        revTrm[j] = trm[i];
    }
    for(i=0; i<n-1; i++){
        printf("%d ",revTrm[i]);
    }
        printf("%d\n",revTrm[n-1]);


//Alraaafi
}
