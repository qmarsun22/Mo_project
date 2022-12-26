/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/* 
https: //www.onlinegdb.com/online_c_compiler

From: Thursday, January 1, 1998 at 12:00:00 midnight
To: Sunday, January 1, 2023 at 12:00:00 midnight

Result: 9131 days, 0 hours, 0 minutes and 0 seconds
The duration is 9131 days, 0 hours, 0 minutes and 0 seconds

Or 25 years excluding the end date.

Or 300 months excluding the end date.

Alternative time units
9131 days, 0 hours, 0 minutes and 0 seconds can be converted to one of these units:

788,918,400 seconds
13,148,640  = 13 millions data points

219,144 hours
9131 days
1304 weeks and 3 days
2501.64% of a common year (365 days)

*/

#include <stdio.h>
#include <stdlib.h>

/* yes define has problem using it for now as poc */
#define MAX_MINUTE 60
#define MAX_HOUR 24
#define MAX_DAY 31  
#define MAX_MONTH 12
#define MAX_NUMBER_OF_YEARS 25

struct DPminute {
    int val;
} ;

struct DPhour {
     struct minute *min;
};

struct DPDay {
    struct hour *hour;
};

/*
int allocate_memory_data_points(struct *DPDay);
int allocate_memory_data_points(struct *DPDay) {
    DPDay = malloc(sizeof(DPDay)* MAX_DAY);
    for (int dayindx=0; i < MAX_DAY; i++) {
        DPDay[dayindx] = malloc(sizeof(DPhour) * MAX_HOUR);
        for(int j=0; j < )
    }
}
*/


int print_nth_minute(struct DPminute *min, int nth);


int print_nth_minute(struct DPminute *min, int nth)
{
    printf("\n time_series nth value where n=%d", nth);
    for(int i=0; i < MAX_MINUTE ; i=i+nth) {
        printf("\n value min %d, %d", i, min[i].val);
    }
    return 0;
}

int main()
{
    //struct hour hour_val[24];
  
    // staring with minute first
    struct DPminute minute_val[MAX_MINUTE];
    
    for(int i=0;i < MAX_MINUTE; i++) {
        minute_val[i].val = rand();
    }
    
    for(int i=0 ; i < MAX_MINUTE; i++) {
        printf("\n value min %d, %d", i, minute_val[i].val);
    }
    
    print_nth_minute(&minute_val,60);
    /*
    print_nth_minute(&minute_val,30);
    print_nth_minute(&minute_val,15);
    print_nth_minute(&minute_val,5);
    print_nth_minute(&minute_val,1);
    
    */
    

    return 0;
}
