#include<stdio.h>

static int char_map[122];

void word_count(char *s)
{
    int i=0;
    while(s[i] != '\0')
    {
        char_map[(int)s[i]] += 1;
        i++;
    }
}

int main(void)
{
    int i = 0;
    char s[1000];
    fgets(s,1000,stdin);
    word_count(s);
    while(s[i] != '\0')
    {
        if(char_map[(int)s[i]] == 1 && s[i] != '\n')
            printf("%c ",s[i]);
        i++;
    }
    return 0;
}