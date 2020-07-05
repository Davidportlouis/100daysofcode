#include <stdio.h>
#include <math.h>
#define MAX 1000000

int int2bits(int *bits, int x)
{
    int k = 0;
    while (x != 0)
    {
        bits[k] = x % 2;
        x /= 2;
        k++;
    }
    return k;
}

long int bits2int(int *bits, int n)
{
    long int num = 0;
    int j = n;
    for (int i = 0; i < n; i++)
    {
        num += bits[j] * pow(2.0, (double)i);
        j--;
    }
    return num;
}

void merge(int *merged, int *bits_1, int *bits_2, int n_1, int n_2)
{
    int j = 0, k = 0, n = n_1 + n_2;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            if (j < n_1)
            {
                merged[i] = bits_1[j];
                j++;
            }
            else
            {
                merged[i] = bits_2[k];
                k++;
            }
        }
        else if (i % 2 == 0)
        {
            if (k < n_2)
            {
                merged[i] = bits_2[k];
                k++;
            }
            else
            {
                merged[i] = bits_1[j];
                j++;
            }
        }
    }
}

int main(void)
{
    int x,y,bits_1[MAX], bits_2[MAX], n_1, n_2;
    scanf("%d %d",&x,&y);
    n_1 = int2bits(bits_1, x);
    n_2 = int2bits(bits_2, y);
    int merged_bits[n_1 + n_2];
    merge(merged_bits, bits_1, bits_2, n_1, n_2);
    printf("%ld", bits2int(merged_bits, n_1 + n_2));
    return 0;
}