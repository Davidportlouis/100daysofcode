#include<stdio.h>

void sort(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] < arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(void)
{
    char s[100];
    int n, alpha[26]={0},digit[10]={},j=0,a_max,d_max;
    scanf("%s%n",s,&n);
    for(int i=0;i<n;i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z'){
            j = s[i] - 'a';
            // printf("%d ",j);
            ++alpha[j];
        }else if(s[i] >= '0' && s[i] <= '9'){
            j = s[i] - '0';
            ++digit[j];
        }
    }
    sort(alpha,26);
    sort(digit,10);
    a_max = alpha[0];
    d_max = digit[0];
    (a_max > d_max) ? printf("%d\n",a_max) : printf("%d\n",d_max);
    return 0;
}