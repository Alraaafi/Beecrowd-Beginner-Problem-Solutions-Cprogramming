#include<stdio.h>
int main(){
    int i,j,k,l;

    for(j=1; j<=39; j++) { printf("-"); }
    printf("\n");
    for(i=1;i<=5;i++){
        for(k=1; k<=39; k++){
            if(k==1 || k==39) {printf("|");}
            else printf(" ");
        }
        printf("\n");
    }
    for(l=1; l<=39; l++) printf("-");
    printf("\n");

    return 0;
}
