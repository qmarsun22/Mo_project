/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/* 
https://www.onlinegdb.com/online_c_compiler

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
// year 0 to 24 ( 2000 to 2024)
// month 0 to 11 
// day  0 to 30
// hour 0 to 23 
// min 0 to 59
//





/*
int print_nth_minute(struct DPminute *min, int nth);


int print_nth_minute(struct DPminute *min, int nth)
{
    printf("\n time_series nth value where n=%d", nth);
    for(int i=0; i < MAX_MINUTE ; i=i+nth) {
        printf("\n value min %d, %d", i, min[i].val);
    }
    return 0;
}
*/


int store_random_value(int *datapts);
int store_random_value(int *datapts) {
    for(int y=0; y < MAX_NUMBER_OF_YEARS; y++) {
        for(int m=0; m < MAX_MONTH; m++ ) {
            for(int k=0; k < MAX_DAY; k++) {
                for(int i=0; i < MAX_HOUR; i++) {
                    for(int j=0; j < MAX_MINUTE; j++ ) {
                        int index = y+MAX_MONTH+m+MAX_DAY+k+MAX_HOUR+ i+MAX_MINUTE+ j;
                        *(datapts +index) = rand();
                    } 
                }
            }
        }
    }
}

int print_values(int *datapts) {
  for(int y=0; y<=MAX_NUMBER_OF_YEARS; y++) {
        for(int m=0; m<MAX_MONTH; m++ ) {
            for(int k=0; k <MAX_DAY; k++) {
                for(int i=0; i<MAX_HOUR; i++) {
                    for(int j=0; j <MAX_MINUTE; j++ ) {
                        int val =  *(datapts +y+MAX_MONTH+m+MAX_DAY+k+MAX_HOUR+ i+MAX_MINUTE+ j);
                        printf("\n value yr=%d mnt=%d, day=%d, hr=%d, min=%d, %d",y,m,k, i,j, val);
                        
                    }
                }
            }
        }
    }  
}

//  int year, int month, int day,int hour, int nthminute;
int print_nthvalues(int *datapts,int year, int month, int day,int hour, int nthminute) {
    int y = year;
    int m = month;
    int d = day;
    int h = hour;
    int nthminute = nthminute;
  for(int y=0; y<=MAX_NUMBER_OF_YEARS; y++) {
        for(int m=0; m<MAX_MONTH; m++ ) {
            for(int k=0; k <MAX_DAY; k++) {
                for(int i=0; i<MAX_HOUR; i++) {
                    for(int j=0; j <MAX_MINUTE; j++ ) {
                        int val =  *(datapts +y+MAX_MONTH+m+MAX_DAY+d+MAX_HOUR+ h+MAX_MINUTE+ j);
                        printf("\n value yr=%d mnt=%d, day=%d, hr=%d, min=%d, %d",y,m,k, i,j, val);
                    }
                }
            }
        }
    }  
}


int try3() {
    int *dp_hr_min;
    dp_hr_min = malloc(MAX_NUMBER_OF_YEARS*MAX_MONTH* MAX_DAY*MAX_HOUR *MAX_MINUTE*sizeof(int));
    
    for(int y=0; y<=MAX_NUMBER_OF_YEARS; y++) {
        for(int m=0; m<MAX_MONTH; m++ ) {
            for(int k=0; k <MAX_DAY; k++) {
                for(int i=0; i<MAX_HOUR; i++) {
                    for(int j=0; j <MAX_MINUTE; j++ ) {
                        int index = y+MAX_MONTH+m+MAX_DAY+k+MAX_HOUR+ i+MAX_MINUTE+ j;
                        *(dp_hr_min +index) = rand();
                    } 
                }
            }
        }
    }
    for(int y=0; y<=MAX_NUMBER_OF_YEARS; y++) {
        for(int m=0; m<MAX_MONTH; m++ ) {
            for(int k=0; k <MAX_DAY; k++) {
                for(int i=0; i<MAX_HOUR; i++) {
                    for(int j=0; j <MAX_MINUTE; j++ ) {
                        int val =  *(dp_hr_min +y+MAX_MONTH+m+MAX_DAY+k+MAX_HOUR+ i+MAX_MINUTE+ j);
                        printf("\n value yr=%d mnt=%d, day=%d, hr=%d, min=%d, %d",y,m,k, i,j, val);
                        
                    }
                }
            }
        }
    }
}

int main()
{
    //struct hour hour_val[24];
  // try2();
  int *datapts;
  datapts = malloc(MAX_NUMBER_OF_YEARS*MAX_MONTH* MAX_DAY*MAX_HOUR *MAX_MINUTE*sizeof(int));
  store_random_value(datapts);
  // print_values(datapts);
  int year,month,day,hour,nthminute;
  printf("\n enter year 0 to 25 :");
  scanf("%d",&year);
  printf("\n enter month 0 to 11 :");
  scanf("%d",&month);
  printf("\n enter day 0 to 31 :");
  scanf("%d",&day);
  printf("\n enter hour 0 to 23 :");
  scanf("%d",&hour);
  printf("\n enter nthminute (5,15,30,60):");
  scanf("%d",&nthminute);
  printf("\n input values year=%d, month=%d,day=%d,hour=%d,nthminute=%d"
        ,year,month,day,hour,nthminute);


  
  /*
    // staring with minute first
    int *dpminutes;
    int **dphours;
    dpminutes = malloc(MAX_MINUTE);
    dphours = malloc(MAX_HOUR);
    for(int i=0; i<MAX_HOUR; i++ ) {
        *(dphours+i) = malloc(MAX_MINUTE);
        for(int j=0;j < MAX_MINUTE; j++) {
            *(dphours+i+j) = rand();
            printf("\n value min %d, %d", i, *(dpminutesi+i+j));
    
        }
    }
   
   */
   
    
   // print_nth_minute(&minute_val,60);
    
    /*
    print_nth_minute(&minute_val,30);
    print_nth_minute(&minute_val,15);
    print_nth_minute(&minute_val,5);
    print_nth_minute(&minute_val,1)
    test
    */
    

    return 0;
}
