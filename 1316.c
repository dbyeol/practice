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

        /* ������� solution���� ��ü */
        alp[word[0]-97]++; // ù ���ĺ��� �ش��ϴ� �迭�� ī��Ʈ
        for (int j = 1; j < strlen(word); i++)
        {
            if (word[j] != word[j-1]) // ������ ���� �ٸ���
            {
                alp[word[j]-97]++; // ī��Ʈ
                
                if (alp[word[j]-97] > 1) // �̶� ī��Ʈ�� 1�� �Ѿ��
                {
                    break; // ����� ���� break
                }
            }
            if (j = strlen(word)-1) // ���� ���ĺ����� �����ϸ� ����� +1
            {
                result++;
            }          
        }
        /* solution 1 fail
        int idx = 0; // ���� ���� �߰�

        for (int j = 1; j < strlen(word); j++)
        {
            for (int k = 0; k < j; k++)
            {
                if (a[j] == a[k])
                {
                    idx = j - k;
                
                    if (idx == 1 || idx == 0) // �ٷ� ���� ���� ���ų�(idx = 1) ��� �ٸ� ���ĺ��� ���(idx = 0) 
                    {
                        result++; // result���� ���� ��찡 �ݺ��� ������ +1
                    }
                    // if (idx > 1)�� �ٲ㵵 gndml result ���� ��ġ�� ����ġ����
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
                
                if (idx > 1) // idx = 0 or 1�̸� �׷�ܾ�
                {
                    if (w[k-1] != w[k]) // �ٷ� ������ �ܾ�� ���� �ܾ����� Ȯ��
                    {
                        return 0;// �ƴϸ� ������ ����, �̸� ���� �Լ� ���
                    } 
                }
                    
            }
        } 
    }
    return 1; // ���� ���ǿ� �ش����� �ʴ� ��� = �׷�ܾ�
                    1�� ��ȯ
}
*/ 