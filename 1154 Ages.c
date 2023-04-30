#include<stdio.h>
int main()
{
    int age,count=0,sum=0;
    float avg;

    while(1)
    {
        scanf("%d",&age);
        if(age<0)
        {
            break;
        }
        else
        {
            sum = sum+age;
            count++;
        }

            }
    avg = (double)sum/(double)count;
    printf("%.2lf\n",avg);

   return 0;
}


