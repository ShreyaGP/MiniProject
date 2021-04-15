/**
 * @file Not.c
 * @author Shreya
 * @brief NOT function definition
 * @version 0.1
 * @date 2021-04-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include "logicgates.h"

/**
 * @brief Function to perform logical NOT operation
 * 
 * @param a input
 * @return int 
 */
int NOT(int a)
{
    printf("IC 7404 is the Hex inverter\n");
    return ~(a);
}