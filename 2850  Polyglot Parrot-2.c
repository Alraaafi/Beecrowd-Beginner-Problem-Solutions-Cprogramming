#include<stdio.h>
int main()
{
    char str[10];
    while(gets(str)!=EOF){
        if(str[0]=='e') printf("ingles\n");
        else if(str[0]=='d') printf("frances\n");
        else if(str[0]=='n') printf("portugues\n");
        else{
            printf("caiu\n");
            //break;
        }
    }
    return 0;

}
