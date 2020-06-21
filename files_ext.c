#include<stdio.h>
#include<string.h>
#define MAX 50
#define MAX_NAME 24

static char ext[MAX][MAX_NAME];
static char filename[MAX][MAX_NAME];
static int n;

void extract_ext(char *s,int x)
{
    int j,k,flag;
        j = 0,k=0,flag=0;
        while(s[j] != '\0')
        {
            if(s[j] == '.' )
                flag = j;
            j++;
        }
        while(s[flag] != '\0')
        {
            ext[x][k] = s[flag];
            k++;
            flag++;
        }
}

int get_count(char *s,int x)
{
    int count = 1;
    for(int i=0;i<n;i++)
    {
        if(strcmp(s,ext[i]) == 0 && i!=x)
        {   
            count++;
            strcpy(ext[i],"0");
        }             
    }
    return count;
}

int main(void)
{    
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",filename[i]);
    }
    for(int i=0;i<n;i++)
    {
        extract_ext(filename[i],i);
    }
    for(int i=0;i<n;i++)
    {
        if(strcmp(ext[i],"0")!=0)
        {
            printf("%d %s\n",get_count(ext[i],i),ext[i]);
        }
    }
    return 0;
}