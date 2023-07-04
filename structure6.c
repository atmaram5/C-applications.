#include<stdi.h>

struct Demo 
{
    int i;
    float f;
    struct Demo obj;          //NOT Allowed

};

int main()
{
    struct Demo obj1;          //Allowed
    return 0;

}


