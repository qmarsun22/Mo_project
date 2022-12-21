/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
struct value {
    float val;
};

struct minute {
    struct value v;
};


int main()
{
    struct minute min[60];
    for(int i=0;i < 60; i++) {
        min[i].v = rand();
    }
    
    for(int i=0 ; i < 60; i++) {
        printf("value min %f",min[i].v);
    }
    printf("Hello World");

    return 0;
}
