#include<stdio.h>
int main(){
	int m,c1,c2,c3;
    scanf("%d %d %d",&m,&c1,&c2);
    c3 = m - (c1+c2);

    if(c1>c2 && c1>c3) printf("%d\n",c1);
    else if(c2>c1 && c2>c3) printf("%d\n",c2);
    else printf("%d\n",c3);

	return 0;
}
