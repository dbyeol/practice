#include <stdio.h>

int main(void){

    int i, n, max = 0;
    int v[9];

    for (i = 0; i < 9; i++)
    {
        scanf("%d", &v[i]);

        if (v[i] > max)
        {
            max = v[i];
            n = i + 1;
        }
    }
    
    printf("%d\n%d", max, n);

    return 0;
}