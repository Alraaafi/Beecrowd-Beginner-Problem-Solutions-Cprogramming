#include<stdio.h>
int main(){
	int N,i,NumAni,totalAni,c=0,r=0,s=0;
	double cp,rp,sp;
	char animal;
	scanf("%d",&N);
	for(i=1; i<=N; i++){
        scanf("%d %c",&NumAni,&animal);
        if(animal == 'C'){
            c = c + NumAni;
        }
        else if(animal == 'R'){
            r = r + NumAni;
        }
        else if(animal == 'S'){
            s = s + NumAni;
        }
	}
    totalAni = c + r + s;
    cp = ((double)c/(double)totalAni)*100;
    rp = ((double)r/(double)totalAni)*100;
    sp = ((double)s/(double)totalAni)*100;

    printf("Total: %d cobaias\n",totalAni);

    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);

    printf("Percentual de coelhos: %.2lf %%\n",cp);
    printf("Percentual de ratos: %.2lf %%\n",rp);
    printf("Percentual de sapos: %.2lf %%\n",sp);
	return 0;
}
