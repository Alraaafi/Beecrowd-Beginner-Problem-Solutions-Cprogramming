#include <stdio.h>
int main()
{
    int row,col,i,j,x=0,y=0;
    scanf("%d %d",&row,&col);

    int bord[row][col];

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            scanf("%d",&bord[i][j]);
        }
    }

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            if((bord[i][j]==42) && (bord[i][j+1]==7) && (bord[i][j-1]==7) && (bord[i+1][j]==7) && (bord[i-1][j]==7)  && (bord[i-1][j+1]==7)&& (bord[i+1][j-1]==7)&& (bord[i+1][j+1]==7)&& (bord[i-1][j-1]==7) ) {
                x = i+1;
                y = j+1;
                break;
            }
        }
    }

    printf("%d %d\n",x,y);

    //©Alraaafi
}
