#include <stdio.h>

int main()
{
    int n;
    double a,b,c;

    scanf("%i", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%lf", &a);
        scanf("%lf", &b);
        scanf("%lf", &c);

        double med = ((a/10) * 2) + ((b/10) * 3) + ((c/10) * 5);

        printf("%.1f\n", med);
    }

    return 0;
}
