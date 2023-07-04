#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int *ptr  = NULL;
    // Step1 : Allocate the memory

    ptr = (int *)malloc(sizeof(int) * 5);         // 20 bytes

    // Step2 : Use the memory (In the logic building batch)

    ptr  = (int *)realloc(ptr, sizeof(int) * 7);    // 28 bytes

    ptr =  (int *)realloc(ptr, sizeof(int) * 3);      // 12 bytes


    // Step3 : Deallocate the memory 

    free(ptr);

    return 0;

}