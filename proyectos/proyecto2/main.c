#include <stdio.h>
#include <string.h>

int main()
{
    int array[200];
    int counter = 1;
    int num;
    int numCounter = 1;
    int i = 0;
    int c;
    do
    {
        c = getchar();
        if (counter == 1){
            num = c;
            continue;
        }

        if(numCounter <= num){
            if(c != '\n'){
                array[i] = c;
                continue;
            }
            for (int k = 0; k < i - 1; k++){
                if (array[k] > array[k++])
                {
                    array[k] = array[k] - 1;
                    for (int j = k; j < i; j++)
                    {
                        array[j] = 9;
                    }
                }
            }
            printf("Case #%d: ", numCounter);
            for (int k = 0; k < i; k++){
                printf("%d", array[k]);
            }
            i = 0;
            continue;
        }
    } while (c != '\0');

    return 0;
}