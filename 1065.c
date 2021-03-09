#include <stdio.h>

int fucn(int num){

    int a, b, c, count = 0;

    if(num < 10){   
            printf("%d", num);
        }
    else if(num < 100){
        printf("%d", num);
    }   /* 0~99까지는 그냥 count++로 간략하게도 표현 가능 */
    else if(num <= 1000){
        for (int i = 100; i <= num; i++)
        {
            a = (i % 100)%10;
            b = (i%100)/10;
            c = i/100;
            if (a-b == b-c)
            {
                count++;
            }          
        }
        printf("%d", 99 + count);
    }
    return 0;
}

int main(void){

    int n;

    scanf("%d", &n);
    fucn(n);

    return 0;
}