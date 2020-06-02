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
    char s[1000];
    int n,chars[60]={0},j,max;
    scanf("%s%n",s,&n);
    for(int i=0;i<n;i++){
        if(s[i] >= 'A' || s[i] <= 'z'){
            j = s[i] - 'A';
            ++chars[j];
        }
    }
    sort(chars,60);
    max = chars[0];
    printf("%d\n",max);
    return 0;
}