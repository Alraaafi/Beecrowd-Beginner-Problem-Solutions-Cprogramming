#include <stdio.h>
int main(){
    char tw[501];
    gets(tw);

    if(strlen(tw)<=140) printf("TWEET\n");
    else printf("MUTE\n");

    //©Alraaafi
}
