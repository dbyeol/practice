/* �ð� �ʰ� fail */
#include <stdio.h>
// #include <math.h> : ceil�� ���� ������� �߰�

int main(void){

    int a, b, v, result = 0, cnt = 0;

    scanf("%d %d %d", &a, &b, &v);

    while (1) // ���� Ŭ���� ���� �ɸ�
    {
        result += a;
        if (result >= v)
        {
            printf("%d", cnt+1);
            return 0;
        }
        result -= b;   
        cnt++;
    }

    /* ���� ax-b(x-1) >= v��� ���� �̿�(x�� ��)
    result = ceil((double)(v-b)/(a-b)); // ceil �ݿø� - �ø�
    printf("%d", result);
    */

    return 0;
}