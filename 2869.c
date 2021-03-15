/* 시간 초과 fail */
#include <stdio.h>
// #include <math.h> : ceil을 위한 헤더파일 추가

int main(void){

    int a, b, v, result = 0, cnt = 0;

    scanf("%d %d %d", &a, &b, &v);

    while (1) // 수가 클수록 오래 걸림
    {
        result += a;
        if (result >= v)
        {
            printf("%d", cnt+1);
            return 0;
        }
        result -= b;   
        cnt++;
    }

    /* 수식 ax-b(x-1) >= v라는 식을 이용(x는 낮)
    result = ceil((double)(v-b)/(a-b)); // ceil 반올림 - 올림
    printf("%d", result);
    */

    return 0;
}