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
    int n,chars[74]={0},j,max;
    scanf("%s%n",s,&n);
    for(int i=0;i<n;i++){
        if(s[i] >= '0' || s[i] <= 'z'){
            j = s[i] - '0';
            // printf("%d ",j);
            ++chars[j];
        }
    }
    sort(chars,74);
    max = chars[0];
    printf("%d\n",max);
    return 0;
}