/**
 * @file Nand.c
 * @author Shreya
 * @brief NAND fuction definition
 * @version 0.1
 * @date 2021-04-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include "logicgates.h"

/**
 * @brief Function to perform logical NAND operation
 * 
 * @param a input
 * @param b input
 * @return int 
 */
int NAND(int a,int b)
{
    printf("IC 7400 is the Quad two input NAND gate\n");
    return (~a & ~b);
}