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
        /* max���� ���ĺ��� ������ ���� && �ѱ��� �Է��� ��� alp[1]���� ���� 0
                                            ��, 0�� �ƴϸ� ��°��� ?
        else if(max == alp[i] && alp[i] != 0)
        {
            result = -1;
        }
        */
    }

    // max�� ��ġ�� ���ĺ� �����ϴ��� Ȯ��(���� ���ǵ�� �����ϸ� ���� �ʿ�x)
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
    /* �ٷ� ���� for�� ~ else���� �Ʒ� �ڵ����� ����
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

    // �ҹ��� �� �빮�� �����Ͽ� �Է°� Ȯ��(�䱸�ð� �ʰ�)
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

    /* �Է°� Ȯ���� �̷������� �����ϰ� ǥ�� ����
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