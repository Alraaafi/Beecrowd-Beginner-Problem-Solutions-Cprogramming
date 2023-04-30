#include <stdio.h>

    int main()
    {
         int i,a, b, sum=0;
         scanf("%d %d",&a,&b);

         if(a%2==0 && b%2==0){
            for(i=b+1;i<a ; i=i+2)
                sum = sum + i;
         }
         else if(a%2!=0 && b%2!=0){
            for(i=b+2;i<a-1 ; i=i+2)
                sum = sum + i;
         }
         else if(a%2!=0 && b%2==0){
            for(i=b+1;i<a-1 ; i=i+2)
                sum = sum + i;
         }
         else{
            for(i=b+2;i<a ; i=i+2)
                sum = sum + i;
         }
         printf("%d\n",sum);

         return 0;
    }
