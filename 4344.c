#include <stdio.h>

int main(void){

    int c, student, sum, count;
    int score[1002];
    float p, avg;

    scanf("%d", &c);

    for (int i = 0; i < c; i++)
    {
        sum = 0, avg = 0.00;
        scanf("%d", &student);

         for (int j = 0; j < student; j++)
         {
             scanf("%d", &score[j]);
             sum += score[j];
         }         
         avg = (float)sum/student;
         
         count = 0; // 초기화 잊지않기(오류 원인)        
         for (int k = 0; k < student; k++)
         {
            if (score[k] > avg)
            {
                count++;
            }
         }
         p = (float)count/student*100;
         printf("%.3f%%\n", p);
    }
    return 0;    
}