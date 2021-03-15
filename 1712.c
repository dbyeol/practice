/* 시간초과 fail */
#include <stdio.h>

int main(void){

    int a, b, c, num = 1;

    scanf("%d %d %d", &a, &b, &c);

    while (1) // 수가 커질수록 시간이 오래 걸림
    {
        num++;
        if ((c*num - (a+b*num)) > 0)
        {
            printf("%d", num);
            break;
        }
        if (b >= c)
        {
            printf("-1");
            break;
        }
    }
    return 0;

    /* 다른 수식(a/(c+b) < num)을 이용하여 해결
    if (b >= c)
    {
        printf("-1");
        return 0;
    }

    num = a/(c-b)+1; // +1은 수식의 계산결과가 소숫점이 나올 경우를 대비
    printf("%d", num);
    return 0;
    */
}