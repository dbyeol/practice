/* fail */
#include <string.h>
#include <stdio.h>

int main(void){

    int count = 0;
    char str[1000002];

    scanf("%s", str); /* scanf에서 서식 지정자 %s로 문자열을 저장할 때 
                            입력된 문자열에 공백이 있다면 배열에는 공백 직전까지만 저장 */

    /*
    공백까지 포함해서 입력받으려면 %[^\n]s 사용
      → scanf("%[^\n]s", s1);
         (^\n : enter를 제외한 모든 문자열을 받는다) 
    */

    /* 정확한 출력을 위해선 이러한 조건이 필요함
    if (strlen(str) == 1 && str[0] == ' ')
    {
        printf("0");
        return 0;
    }
    */

    for (int i = 1; i < strlen(str) - 2; i++) /* strlen(str) - 2 -→ strlen(str) - 1 */
    {
        if (str[i] == ' ')
        {
            count += 1;
        }
    }
    
    printf("%d", count+1);

    return 0;
} 