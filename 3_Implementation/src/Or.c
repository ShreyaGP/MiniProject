/**
 * @file Or.c
 * @author Shreya
 * @brief OR function definition
 * @version 0.1
 * @date 2021-04-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include "logicgates.h"

/**
 * @brief Function to perform logical OR operation
 * 
 * @param a input
 * @param b input
 * @return int 
 */
int OR(int a,int b)
{
    printf("IC 7432 is the Quad two input OR gate\n");
    return (a | b);
}