
#include <stdio.h>

void change(double ar[3][3])
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (i == 0)
            {
                ar[i][j] = (ar[i][j]) * 2;
            }
            if (i == 1)
            {
                ar[i][j] = (ar[i][j]) / 2;
            }
            if (i == 2)
                ar[i][j] = (ar[i][j]) - 1;
            printf("%.2lf ", ar[i][j]);

        }
        printf("\n");
    }
}

void q1()
{
    double ar[3][3];
    printf("Enter 9 real numbers:");

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            scanf("%lf", &ar[i][j]);
        }
    }
    change(ar);

}

