#include<stdio.h>
int main()
{
    int a,b,c,n,i;

    scanf("%d",&n);

    for(i=1; i<=n; i++){
    scanf("%d%d",&a,&b);
    c = a+b;

    if(c==0) printf("PROXYCITY\n");
    else if(c==1) printf("P.Y.N.G.\n");
    else if(c==2) printf("DNSUEY!\n");
    else if(c==3) printf("SERVERS\n");
    else if(c==4) printf("HOST!\n");
    else if(c==5) printf("CRIPTONIZE\n");
    else if(c==6) printf("OFFLINE DAY\n");
    else if(c==7) printf("SALT\n");
    else if(c==8) printf("ANSWER!\n");
    else if(c==9) printf("RAR?\n");
    else if(c==10) printf("WIFI ANTENNAS\n");
    }


    //Alraaafi
    return 0;
}
