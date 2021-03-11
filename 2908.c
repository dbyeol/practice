#include <stdio.h>

int main(void){

    int a, b, ai, bi;

    scanf("%d %d", &a, &b);

    ai = a/100 + ((a/10)%10)*10 + (a%10)*100;
    bi = b/100 + ((b/10)%10)*10 + (b%10)*100;

    if (ai > bi)
    {
        printf("%d", ai);
    }
    else if (ai < bi)
    {
        printf("%d", bi);
    }

    return 0;
}
