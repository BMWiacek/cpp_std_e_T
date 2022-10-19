
/*
 * Clock related functions
 */
#include <stdio.h>
#include "clock.h"
#include "consts.h"
#include "inout.h"

/*
 * Print the current time
 */
void display_time()
{
    char buf[BUF_SIZE];
    time_t the_time = time(NULL);
    char *t = ctime(&the_time);
    
    sprintf(buf, "\n\nCurrent Time and Date is %s\n\n", t);
    print_string(buf);
}


/* 
 * Dummy Function -- time always taken from system
 */
void set_time(time_t new_time)
{
}


static int zeroMethod()
{
    return 0;
}

static void assignmentRemainderOfMethodResult()
{
    int z = 5;
    z %= zeroMethod(); // VIOLATION BD-PB-ZERO
}

static void assignRemainderOfVar()
{
    int a = 5;
    int b = 0;
    a %= b; // VIOLATION BD-PB-ZERO
}
