#include<stdio.h>
#include<string.h>
int main(){
    int i,count = 0,j=0;
    char str[9],first[5],last[3],revF[3],revL[5];
    gets(str);
    for(i=0; i<strlen(str); i++){

        if(count==0) revL[i] = str[i];
        printf("xx-%d\n",i);
        if(str[i]=='.'){
            count++;
            break;
        }
    }

    for(i=strlen(str)-1; i>=0; i--){
        if(str[i]=='.') break;
        revF[j] = str[i];
        j++;
    }
    printf("revL-%s\n",revL);
    printf("%s.%s",strrev(revF),revL);

}
