#include<stdio.h>
int main(){
    int l;
    char text[600];
    gets(text);

    l = strlen(text);

    if(l<=80) printf("YES\n");
    else      printf("NO\n");

    //©Alraaafi

}
