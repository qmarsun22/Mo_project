/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

/* yes define has problem using it for now as poc */
#define MAX_MINUTE 60
 struct minute {
    int val;
} ;

struct hour {
     struct minute min;
};

int print_nth_minute(struct minute *min, int nth);


int print_nth_minute(struct minute *min, int nth)
{
    printf("\n time_series nth value where n=%d", nth);
    for(int i=0; i < 60; i=i+nth) {
         printf("\n value min %d, %d", i, min[i].val);
    }
    return 0;
}

int main()
{
    //struct hour hour_val[24];
  
    // staring with minute first
    struct minute minute_val[60];
    for(int i=0;i < 60; i++) {
        minute_val[i].val = rand();
    }
    
    for(int i=0 ; i < 60; i++) {
        printf("\n value min %d, %d", i, minute_val[i].val);
    }
    
    print_nth_minute(&minute_val,60);
    print_nth_minute(&minute_val,30);
    print_nth_minute(&minute_val,15);
    print_nth_minute(&minute_val,5);
    print_nth_minute(&minute_val,1);
    
    printf("Hello World");

    return 0;
}
