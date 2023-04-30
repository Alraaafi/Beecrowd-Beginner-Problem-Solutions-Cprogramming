#include <stdio.h>
int main(){
    int i,ch,nth;
    char alf[26],word[10001];
    while(scanf("%s",alf)!=EOF){

        scanf("%d",&ch);

        for(i=0; i<ch; i++){
            scanf("%d",&nth);
            word[i] = alf[nth-1];
        }
        word[i] ='\0';
        printf("%s\n",word);

    }
    return 0;

    //Alraafi
}
