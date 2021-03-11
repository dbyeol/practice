/* fail */
#include <stdio.h>
#include <string.h>

int ans(int alp[]){

    int max, count = 0, result = 0;

    // max = alp[0];
    for (int i = 0; i < 26; i++) // for (int i = 1; i < 26; i++)
    {
        if (alp[i] > max)
        {
            max = alp[i];
            result = i;
        }
        /* max값의 알파벳이 여러개 존재 && 한글자 입력의 경우 alp[1]부턴 값이 0
                                            즉, 0이 아니면 출력값은 ?
        else if(max == alp[i] && alp[i] != 0)
        {
            result = -1;
        }
        */
    }

    // max값 겹치는 알파벳 존재하는지 확인(위의 조건들로 수정하면 굳이 필요x)
    for (int i = 0; i < 26; i++)
    {
        if (alp[i] == max)
        {
            count += 1;
        }
    }

    if (count > 1)
    {
        printf("?");
    }
    else{
        printf("%c", result+65);
    }
    /* 바로 위의 for문 ~ else까지 아래 코딩으로 수정
    if (reuslt != -1)
    {
        printf("%c", result+65);
    }
    else
    {
        printf("?");
    }
    */

    return 0;
}

int main(void){

    int alp[26] = {0, };
    char word[1000002];

    scanf("%s", word);

    // 소문자 및 대문자 구분하여 입력값 확인(요구시간 초과)
    for (int i = 'a'; i < 'z'; i++)
    {
        for (int j = 0; j < strlen(word); i++)
        {
            if (word[j] == i)
            {
                alp[i-97] += 1;
            } 
        }
    }
    for (int i = 'A'; i < 'Z'; i++)
    {
        for (int j = 0; j < strlen(word); i++)
        {
            if (word[j] == i)
            {
                alp[i-65] += 1;
            }
        }
    }

    /* 입력값 확인을 이런식으로 간략하게 표현 가능
    for (int i = 0; word[i] != '\n'; i++)
    {
        if (word[i] < 97)
        {
            word[i] += 32;
        }
        alp[word[i]-97]++;
    }
    */

    ans(alp);

    return 0; 
}