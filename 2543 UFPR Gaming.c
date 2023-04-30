#include <stdio.h>
int main(){
    int id,cs,i,idi,no,count=0;
    while(scanf("%d%d",&cs,&id)!=EOF){
        for(i=1; i<=cs; i++){
            scanf("%d%d",&idi,&no);
            if(idi==id && no == 0) count++;
        }
        printf("%d\n",count);
        count = 0;
    }
    return 0;
}
