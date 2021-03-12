#include <stdio.h>
#include <string.h>

/* solution 2
int ans(char w[]);
*/

int main(void){

    int N, result = 0;
    int alp[26];
    char word[102];

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%s", word);

        /* 여기부터 solution으로 대체 */
        alp[word[0]-97]++; // 첫 알파벳에 해당하는 배열에 카운트
        for (int j = 1; j < strlen(word); i++)
        {
            if (word[j] != word[j-1]) // 이전의 값과 다르면
            {
                alp[word[j]-97]++; // 카운트
                
                if (alp[word[j]-97] > 1) // 이때 카운트가 1을 넘어가면
                {
                    break; // 결과값 없이 break
                }
            }
            if (j = strlen(word)-1) // 최종 알파벳까지 도달하면 결과값 +1
            {
                result++;
            }          
        }
        /* solution 1 fail
        int idx = 0; // 변수 선언에 추가

        for (int j = 1; j < strlen(word); j++)
        {
            for (int k = 0; k < j; k++)
            {
                if (a[j] == a[k])
                {
                    idx = j - k;
                
                    if (idx == 1 || idx == 0) // 바로 이전 값과 같거나(idx = 1) 모두 다른 알파벳일 경우(idx = 0) 
                    {
                        result++; // result값이 위의 경우가 반복될 때마다 +1
                    }
                    // if (idx > 1)로 바꿔도 gndml result 값의 위치가 마땅치않음
                    {
                        break;
                    }
                    
                }
            } 
        }
        */   

       /* solution 2
        result += ans(word);
       */
    }
    printf("%d", result);

    return 0;
}

/* solution 2
int ans(char w[]){

    int idx = 0;

    for (int j = 0; j < strlen(w); j++)
    {
        for (int k = 0; k < strlen(w); k++)
        {
            if (w[j] == w[k])
            {
                idx = k - j;
                
                if (idx > 1) // idx = 0 or 1이면 그룹단어
                {
                    if (w[k-1] != w[k]) // 바로 이전의 단어와 같은 단어인지 확인
                    {
                        return 0;// 아니면 과정을 끝냄, 이를 위해 함수 사용
                    } 
                }
                    
            }
        } 
    }
    return 1; // 위의 조건에 해당하지 않는 경우 = 그룹단어
                    1값 반환
}
*/ 