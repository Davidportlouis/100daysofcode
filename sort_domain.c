#include<stdio.h>
#include<stdlib.h>
#include<string.h>

static char domains[100][20],unique[100][20];
int x = 0, counts[100] = {0};

void get_uniques(char *s)
{
    int k = 0;
    for(int i=0;i<x;i++)
    {
        if(strcmp(unique[i],s) != 0)
            k++;
    }
    if(k == x)
        strcpy(unique[x++],s);
}

void extract_domain(char *s,int idx)
{
    int i = 0,k = 0;
    while(s[i] != '@' && s[i] != '\0')
    {
        i++;
    }
    i++;
    while(s[i] != '\0')
    {
        domains[idx][k++] = s[i++];
    }
}

void get_counts(char *s,int idx,int n)
{
    for(int i=0;i<n;i++)
    {
        if(strcmp(s,domains[i]) == 0)
            counts[idx] += 1;
    }
}


void sort()
{
    int n_temp;
    char temp[20];
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x-i-1;j++)
        {
            if(counts[j] < counts[j+1])
            {
                n_temp = counts[j];
                counts[j] = counts[j+1];
                counts[j+1] = n_temp;
                strcpy(temp,unique[j]);
                strcpy(unique[j],unique[j+1]);
                strcpy(unique[j+1],temp);
            }
            else if(counts[j] == counts[j+1])
            {
                if(unique[j][0] > unique[j+1][0])
                {
                    strcpy(temp,unique[j]);
                    strcpy(unique[j],unique[j+1]);
                    strcpy(unique[j+1],temp);
                }
            }
        }
    }
}

int main(void)
{
    char mails[100][50];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",mails[i]);
    }
    for(int i=0;i<n;i++)
    {
        extract_domain(mails[i],i); 
    }
    for(int i=0;i<n;i++)
    {
        get_uniques(domains[i]);
    }
    for(int i=0;i<x;i++)
    {
        get_counts(unique[i],i,n);
    }
    sort();
    for(int i=0;i<x;i++)
    {
        printf("%s\n",unique[i]);
    }
    return 0;
}
