#include <stdio.h>
int main()
{
    char str[]="LIFE IS NOT A PROBLEM TO BE SOLVED";
    int last,i;

    scanf("%d",&last);
    char strLast[last];

    for(i=0; i<last; i++){
        strLast[i] = str[i];
    }
    strLast[i]='\0';

    printf("%s\n",strLast);
    return 0;
}
