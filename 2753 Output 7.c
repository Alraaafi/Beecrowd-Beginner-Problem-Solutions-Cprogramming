#include<stdio.h>
int main(){
     int i,j,n,x,c=0;
     scanf("%d",&n);
     for(i=1; i<=n; i++){
        scanf("%d",&x);
        for(j=1; j<=x; j++){
            if(j*j==x){
            c++;
        }
        }
        if(c==1) printf("YES\n");
            else printf("NO\n");
            c=0;
     }

}

