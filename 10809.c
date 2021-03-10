#include <stdio.h>
#include <string.h>

int main(void){

    char s[102];
    int a[27];

    scanf("%s", s);

    for (int i = 0; i < 26; i++)
    {
        a[i] = -1;
    }
    for (int j = 'a'; j <= 'z'; j++)
    {
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] == j)
            {
                a[j-97] = i;
                break;
            }
        }   
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}