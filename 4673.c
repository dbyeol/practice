#include <stdio.h>

int main(void){

    int r = 0;
    int arr[10002] = {0};

    for (int i = 0; i < 10000; i++)
    {
        if(i < 10){     /* 총 자릿수에 따라 각 자리수 구하는 공식이 달라짐 */
            r = i + i;
            arr[r] = -1;
        }
        else if(i < 100){
            r = i + (i/10) + (i%10);
            arr[r] = -1;
        }
        else if(i < 1000){
            r = i + (i/100) + ((i%100)/10) + ((i%100)%10);
            arr[r] = -1;
        }
        else if(i < 10000){
            r = i + (i/1000) + ((i%1000)/100) + (((i%1000)%100)/10) + (((i%1000)%100)%10);
            if (r <= 10000){
                arr[r] = -1;
            }
        }
    }    
    for(int i = 0; i < 10000; i++){
        if(arr[i] != -1)
            printf("%d\n", i);
    }
    return 0;
}