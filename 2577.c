#include <stdio.h>

int main(void){

    int a, b, c, e, con, q;
    char num[10] = {0};

    scanf("%d\n%d\n%d", &a, &b, &c);

    e = a*b*c;

    for (int i = 0; e > 0; i++)
    {
        q = e % 10;
        num[q] += 1;
        e = e/10;
    }

    for (int j = 0; j < 10; j++)
    {
        printf("%d\n", num[j]);
    }
    
    return 0;

}