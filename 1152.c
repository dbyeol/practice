/* fail */
#include <string.h>
#include <stdio.h>

int main(void){

    int count = 0;
    char str[1000002];

    scanf("%s", str); /* scanf���� ���� ������ %s�� ���ڿ��� ������ �� 
                            �Էµ� ���ڿ��� ������ �ִٸ� �迭���� ���� ���������� ���� */

    /*
    ������� �����ؼ� �Է¹������� %[^\n]s ���
      �� scanf("%[^\n]s", s1);
         (^\n : enter�� ������ ��� ���ڿ��� �޴´�) 
    */

    /* ��Ȯ�� ����� ���ؼ� �̷��� ������ �ʿ���
    if (strlen(str) == 1 && str[0] == ' ')
    {
        printf("0");
        return 0;
    }
    */

    for (int i = 1; i < strlen(str) - 2; i++) /* strlen(str) - 2 -�� strlen(str) - 1 */
    {
        if (str[i] == ' ')
        {
            count += 1;
        }
    }
    
    printf("%d", count+1);

    return 0;
} 