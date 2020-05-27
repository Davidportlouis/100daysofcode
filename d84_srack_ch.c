#include<stdio.h>

int unqiue_counts(long int num)
{
    int digit_ct[10] = {0};
    int count = 0,rem;
    if(num == 0)
        return 1;
    while(num != 0)
    {
        rem = num % 10;
        digit_ct[rem]++;
        if(digit_ct[rem]==1)
            count++;
        num /= 10;
    }
    return count;
}

int main(void)
{
    long int x;
    scanf("%ld",&x);
    (unqiue_counts(x) == 2)? printf("YES") : printf("NO");
    return 0;
}