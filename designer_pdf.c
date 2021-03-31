#include<stdio.h>
#include<string.h>
#define MAX 26
#define WORD_MAX 10


int main(void) {
    int i,area,heights[MAX],n,max=0;
    char s[WORD_MAX];
    for(i=0;i<MAX;i++)
        scanf("%d",&heights[i]);
    scanf("%s",s);
    n = strlen(s);
    for(i=0;i<n;i++) {
        area = heights[s[i] - 'a'];
        if(max < area)
            max = area;
    }
    printf("%d\n",max*n);
    return 0;
}
