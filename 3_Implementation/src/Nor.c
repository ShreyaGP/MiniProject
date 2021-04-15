/**
 * @file Nor.c
 * @author Shreya
 * @brief NOR function definition
 * @version 0.1
 * @date 2021-04-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include "logicgates.h"

/**
 * @brief Function to perform logical NOR operation
 * 
 * @param a input
 * @param b input
 * @return int 
 */
int NOR(int a,int b)
{
    printf("IC 7402 is the Quad two input NOR gate\n");
    return ~(a | b);
}