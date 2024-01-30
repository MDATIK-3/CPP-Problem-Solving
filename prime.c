#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        long p;
        scanf("%ld", &p);

        if (p < 2)
        {
            printf("Not Prime\n");
            continue;
        }

        if (p == 2)

        {
            printf("Prime\n");
            continue;
        }

        for (int i = 2; i <= sqrt(p) ; i++)
        {
            if (p % i == 0)
                count++;
            if (count == 2)
                break;
        }

        if (count >= 1)
            printf("Not Prime\n");
        else
            printf("Prime\n");
    }
    return 0;
}