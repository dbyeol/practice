/* �ð��ʰ� fail */
#include <stdio.h>

int main(void){

    int a, b, c, num = 1;

    scanf("%d %d %d", &a, &b, &c);

    while (1) // ���� Ŀ������ �ð��� ���� �ɸ�
    {
        num++;
        if ((c*num - (a+b*num)) > 0)
        {
            printf("%d", num);
            break;
        }
        if (b >= c)
        {
            printf("-1");
            break;
        }
    }
    return 0;

    /* �ٸ� ����(a/(c+b) < num)�� �̿��Ͽ� �ذ�
    if (b >= c)
    {
        printf("-1");
        return 0;
    }

    num = a/(c-b)+1; // +1�� ������ ������� �Ҽ����� ���� ��츦 ���
    printf("%d", num);
    return 0;
    */
}