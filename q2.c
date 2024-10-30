#include <stdio.h>

int main()
{
    int n, start;
    printf("Enter the number of pairs: ");
    scanf("%d", &n);
    printf("Enter the starting number: ");
    scanf("%d", &start);
    int arr[2][n][2];
    int count_odd = 0, count_even = 0;

    for (int i = start; count_odd < n || count_even < n; i--)
    {
        if (i % 2 == 0)
        {
            arr[0][count_even][0] = i;
            arr[0][count_even][1] = i - 2;
            count_even++;
        }
        else if (i % 2 != 0)
        {
            arr[1][count_odd][0] = i;
            arr[1][count_odd][1] = i - 2;
            count_odd++;
        }
    }

    printf("Even numbers:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n", arr[0][i][0], arr[0][i][1]);
    }

    printf("Odd numbers:\n");
    for (int i = 0; i < n; i++)
  {
        printf("%d %d\n", arr[1][i][0], arr[1][i][1]);
}

    return 0;
}