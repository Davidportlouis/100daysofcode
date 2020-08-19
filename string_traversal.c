// String Traversal Game
#include <stdio.h>
#define MAX 1000

char lower(char c)
{
    return (c >= 65 && c <= 91) ? c+32 : c;
}

int is_vowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ? 1 : 0;
}

void string_traverse(char *s1, char *s2, int n)
{
    int up = 1, i = n - 1;
    while (i >= 0)
    {
        if (up)
        {
            if (is_vowel(lower(s1[i])) == is_vowel(lower(s2[i])))
            {
                printf("%c%c", s1[i], s2[i]);
                up = 0;
                i--;
            }
            else
            {
                printf("%c", s1[i--]);
            }
        }
        else
        {
            if (is_vowel(lower(s1[i])) == is_vowel(lower(s2[i])))
            {
                printf("%c%c", s2[i], s1[i]);
                up = 1;
                i--;
            }
            else
            {
                printf("%c", s2[i--]);
            }
        }
    }
}

int main(void)
{
    char s1[MAX], s2[MAX];
    int n;
    scanf("%s%n", s1, &n);
    scanf("\n");
    scanf("%s", s2);
    string_traverse(s1, s2, n);
    return 0;
}