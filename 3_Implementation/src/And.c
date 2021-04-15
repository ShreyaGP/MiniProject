/**
 * @file And.c
 * @author Shreya
 * @brief AND function definition
 * @version 0.1
 * @date 2021-04-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include "logicgates.h"

/**
 * @brief Function to perform logical AND operation
 * 
 * @param a input
 * @param b input
 * @return int 
 */
int AND(int a,int b)
{
    printf("IC 7408 is the Quad two input AND gate\n");
    return (a & b);
}