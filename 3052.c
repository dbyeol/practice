#include <stdio.h>

int main(void){

    int count, result = 0;
    int num[10] = {0};

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
		num[i] = num[i] % 42;
    }
    for (int j = 0; j < 10; j++)
    {
		count = 0;
        for (int k = 0; k < j; k++)
        {
            if (num[j] == num[k])
            {
                count++;
            }
        }
        if (count == 0)
		{
			result++;
		}	        
    }  
    printf("%d", result);

    return 0;
}