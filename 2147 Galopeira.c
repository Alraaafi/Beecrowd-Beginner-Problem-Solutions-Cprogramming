#include<stdio.h>
int main(){
    char nam[10000];
    int i,n,word;
    double sec;
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        scanf("%s",nam);
        word = strlen(nam);
        sec  = (double)word*0.01;
        printf("%.2lf\n",sec);
    }
    //©Alraaafi

}
