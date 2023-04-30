#include<stdio.h>
#include<string.h>
int main(){
    int i,count = 0;
    char str[15],a[3],b[3],c[3],d[2];
    scanf("%s",str);
    for(i=0; i<strlen(str); i++){

        if(str[i]=='.' || str[i]=='-') count++;
        if(str[i]=='.' || str[i]=='-') continue;

        if(count==0){
            a[i] = str[i];
        }
        else if(count==1){
            b[i-4] = str[i];
        }
        else if(count==2){
            c[i-8] = str[i];
        }
        else if(count==3){
            d[i-12] = str[i];
        }//320.025.102-01


}


    printf("%s\n",a);
    printf("%s\n",b);
    printf("%s\n",c);
    printf("%s\n",d);
}
