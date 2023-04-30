#include<stdio.h>
int main(){
    int i,j,k,l;

    printf("---------------------------------------\n");
    printf("|  decimal  |  octal  |  Hexadecimal  |\n");
    printf("---------------------------------------\n");

    for(k=0; k<=15; k++){
        if(k<8) printf("|      %d    |    %o    |       %X       |\n",k,k,k);
        else if(k==8 || k==9) printf("|      %d    |   %o    |       %X       |\n",k,k,k);
        else printf("|     %d    |   %o    |       %X       |\n",k,k,k);
    }

    printf("---------------------------------------\n");
	return 0;
}
