#include <stdio.h>
#include <string.h>

int main(void){

    int num, sum, score;
    char test[82];

    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        sum = 0, score = 1;
        scanf("%s", &test);
        for (int j = 0; j < strlen(test); j++) // strlen(test) : 테스트 문자열의 길이
        {
            if (test[j] == 'O')
            {
                sum += score;
                score++;
            }
            else{
                score = 1;
            }
        }
        printf("%d\n", sum);   
    }
    return 0;
}