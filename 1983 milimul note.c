#include <stdio.h>
int main() {
    int tc;
    scanf("%d",&tc);
    double note[tc],max=0.0;
    int i,reg[tc],position;

    for(i=0; i<tc; i++){
        scanf("%d %lf",&reg[i],&note[i]);
    }
    for(i=1; i<tc; i++){
            if(max<note[i]) {
                max = note[i];
                position = i;
            }
    }

    if(max<8) printf("Minimum note not reached\n");
    else printf("%d\n",reg[position]);

}
