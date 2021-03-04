#include <stdio.h>

int main(void){

    int N;
    float max = 0, sum = 0;
    float score[1000] = {0};

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%f", &score[i]);

        if (score[i] > max)
        {
            max = score[i];
        }
    }
    for (int i = 0; i < N; i++)
    {
        score[i] = score[i] / max * 100.0;
        sum += score[i];
    }
    
    printf("%f", sum/(float)N);

    return 0;
}
// 왜 다들 double형 사용해..?