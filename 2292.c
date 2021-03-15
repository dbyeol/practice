#include <stdio.h>

int main(void){

    int n, x = 0, cnt = 0;

    scanf("%d", &n);

    while (1)
    {   
        if (n <= 6*x+1)
        {
            printf("%d", cnt+1);
            break;
        }
        cnt++;
        x += cnt;
    }

    return 0;
}