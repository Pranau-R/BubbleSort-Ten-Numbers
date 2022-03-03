/*

Module: BubbleSort-Ten-Numbers.c

Function:
    Bubble sorting given 10 numbers from user and print in ascending order.

Copyright notice:
    This file copyright (C) 2022 by
    
    MCCI Corporation
    3520 Krums Corners Road
    Ithaca, NY 14850
    
    An unpublished work. All rights reserved.

    This file is proprietary information, and may not be disclosed or
    copied without the prior permission of MCCI Corporation.

Author:
    Pranau R, MCCI Corporation   March 2022

*/

#include <stdio.h>

/****************************************************************************\
|
|   Code.
|
\****************************************************************************/

int main()
    {
    int array[10], num, index, next, swap; 
    num = 10;

    // Getting n number of integer input from user
    printf("Enter 10 Random Intergers:\n", num);

    // storing all inputs on their corresponding array index
    for (index = 0; index < num; ++index)
        scanf("%d", &array[index]);

    // Loop command for sorting the inputs
    for (index = 0 ; index < num - 1; ++index)
        {
        for (next = 0; next < num -index -1; ++next)
            {
            if (array[next] > array[next + 1])             // comparing the value of arr[next] and arr[next+1]
                {
                swap = array[next];                        // swaping the values if the condition is true a temporary variable 'swap'
                array[next] = array[next + 1];
                array[next + 1] = swap;
                }
            }
        }

    // printing all our sorted numbers one by one
    printf("Sorted list in ascending order:\n");

    for (index = 0; index < num; ++index)
        printf("%d\n", array[index]);

    return 0;
    }
