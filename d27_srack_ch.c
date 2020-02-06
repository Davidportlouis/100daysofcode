#include <stdio.h>

int main(void)
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < c; i++)
    {
        arr[r / 2][i] = '+';
    }
    for (int i = 0; i < r; i++)
    {
        arr[i][c / 2] = '+';
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i != r / 2 && j != c / 2)
                printf("%d ", arr[i][j]);
            if (j == c / 2)
            {
                 printf("%c ", arr[j][c / 2]);
            }
        }
        if (i == r / 2)
        {
            for(int k=0;k<c-1;k++)
            {
                printf("%c ", arr[r / 2][k]);
            }
        }
                
        printf("\n");
    }

    return 0;
}