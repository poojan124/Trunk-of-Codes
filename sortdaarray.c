#include <stdio.h>

void main()
{
    long long int i, j, a, n, number[30];

    printf("Enter the value of N \n");
    scanf("%lld", &n);
    printf("Enter the numbers \n");
    for (i = 0; i < n; ++i)
        scanf("%lld", &number[i]);
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (number[i] > number[j])
            {
                a =  number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
    printf("The numbers arranged in ascending order are given below \n");
    for (i = 0; i < n; ++i)
        printf("%lld\n", number[i]);
    }
