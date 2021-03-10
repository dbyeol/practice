#include <stdio.h>

int main(void){

    int n, v, sum = 0;
    char a[102];

    scanf("%d", &n);
    scanf("%s", a);

    for (int i = 0; i < n; i++)
    {
        sum += a[i] - '0'; /* ex) a[i] = 7 → 0x37, 
                                7(문자) -0(문자) = 0x37 - 0x30 = 0x7 → 7(10진수로 변환)*/
    }
    
    printf("%d", sum);

    return 0;
}