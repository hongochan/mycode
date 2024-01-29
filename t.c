#include <stdio.h>
#include <stdint.h>

int main()
{

    int arr[5] = { 10, 20, 30, 40, 50 };
    int *ptr;
    int arr2[5] = { 100,90,80,70,60 };
    /*
    for(int i = 0;i<5;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    printf("\n");*/
    
    for(int i = 0;i<5;i++)
    {
        *(ptr+i) = arr2[i];
        printf("%d\t",*(ptr+i));
    }
    


    return 0;
}