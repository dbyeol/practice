/* 시간 초과 fail */
#include <stdio.h>
#include <string.h>

// 간략하고 보기엔 편하지만 시간초과
int time(int t){
    switch (t)
    {
    case 'A':
    case 'B':
    case 'C':
        return 2;
    case 'D':
    case 'E':
    case 'F':
        return 3;
    case 'G':
    case 'H':
    case 'I':
        return 4;
    case 'J':
    case 'K':
    case 'L':
        return 5;
    case 'M':
    case 'N':
    case 'O':
        return 6;
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
        return 7;
    case 'T':
    case 'U':
    case 'V':
        return 8;
    default:
        return 9;
    }
}

int main(void){
    
    int result = 0;
    char word[17];

    scanf("%s", word);

    // switch  문을 이용하기 위한 단계
    for (int i = 0; i < strlen(word); i++)
    {
        for (int j = 'A'; j <= 'Z'; i++)
        {
            if (word[i] == j)
            {
                result += time(j);
            }   
        }
    }
    /*
    switch 문 이외의 방법 사용
   for (int i = 0; i < strlen(word); i++)
   {
       if (word[i] == 'A' || word[i] == 'B' || word[i] == 'C')
       {
           result += 3;
       }
       if (word[i] == 'D' || word[i] == 'E' || word[i] == 'F')
       {
           result += 4;
       }
       if (word[i] == 'G' || word[i] == 'H' || word[i] == 'I')
       {
           result += 5;
       }
       if (word[i] == 'J' || word[i] == 'K' || word[i] == 'L')
       {
           result += 6;
       }
       if (word[i] == 'M' || word[i] == 'N' || word[i] == 'O')
       {
           result += 7;
       }
       if (word[i] == 'P' || word[i] == 'Q' || word[i] == 'R' || word[i] == 'S')
       {
           result += 8;
       }
       if (word[i] == 'T' || word[i] == 'U' || word[i] == 'V')
       {
           result += 9;
       }
       if (word[i] == 'W' || word[i] == 'X' || word[i] == 'Y' || word[i] == 'Z')
       {
           result += 10;
       }
   }
   */
   
    printf("%d", result);

    return 0;
}