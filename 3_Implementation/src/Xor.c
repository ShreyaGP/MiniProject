/**
 * @file Xor.c
 * @author Shreya
 * @brief XOR function definition
 * @version 0.1
 * @date 2021-04-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include "logicgates.h"

/**
 * @brief Function to perform logical XOR operation
 * 
 * @param a input
 * @param b input
 * @return int 
 */
int XOR(int a,int b)
{
    printf("IC 7486 is the Quad two input XOR gate\n");
    return (a ^ b);
}