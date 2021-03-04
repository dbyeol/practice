#include <stdio.h>

int main(void){

    int count, i, s;
    int max = -1000001, min = 1000001;

    scanf("%d", &count);

    for (i = 0; i < count; i++)
    {
        scanf("%d", &s);

        if (s > max)
        {
            max = s;

        }

        if (s < min)
        {
            min = s;
        }

    }

    printf("%d %d", min, max);

    return 0;

}