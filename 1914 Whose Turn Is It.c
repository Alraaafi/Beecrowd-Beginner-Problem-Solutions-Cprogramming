#include<stdio.h>
int main(){
    char name1[100],name2[100];
    char even[]="PAR";
    char odd[]="IMPAR";
    char check1[5];
    char check2[5];
    int N,M,i,cases;

    scanf("%d",&cases);

    for(i=1; i<=cases; i++){
        scanf("%s %s %s %s",name1,check1,name2,check2);
    scanf("%d %d",&N,&M);
    if((N+M)%2==0){
        if(strcmp(check1,even)==-1) printf("%s\n",name1);
        else if(strcmp(check2,even)==-1) printf("%s\n",name2);
    }
    else if((N+M)%2!=0){
        if(strcmp(check1,odd)==0) printf("%s\n",name1);
        else if(strcmp(check2,odd)==0) printf("%s\n",name2);
    }
    }



}

/*
#include <stdio.h>
#include <string.h>
int main()
{
    int a,b;
    long long int c,d,e,f;
    char aa[201], bb[10], cc[201], dd[10], ee="PAR", ff="IMPAR";
    scanf("%d", &a);
    for(b=1; b<=a; b++)
    {
        scanf("%s %s %s %s", aa,bb,cc,dd);
        scanf("%lld%lld", &c, &d);
        e=c+d;
        if(bb[0]=='P')
        {
            if(e%2==0) printf("%s\n", aa);
            else printf("%s\n", cc);
        }
        else
        {
            if(e%2==0) printf("%s\n", cc);
            else printf("%s\n", aa);
        }
    }
    return 0;
*/
