#include<stdio.h>
int main(){
	int b,g,n;
    scanf("%d %d",&b,&g);
    n = (g/2)-b;
    if(n>0) printf("Faltam %d bolinha(s)\n",n);
    else printf("Amelia tem todas bolinhas!\n");

}
