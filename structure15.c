#include<stdio.h>

union Demo
{
    int no;
    double d;
    float f;

};

int main()
{
    union Demo obj;

    printf("%d\n",sizeof(obj));

    obj.no = 11;

    printf("%d\n",obj.no);

    obj.f = 90.99;

    printf("%d\n", obj.f);

    return 0;
    
}