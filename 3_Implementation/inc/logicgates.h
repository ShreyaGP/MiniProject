/**
 * @file logicgates.h
 * @author Shreya
 * @brief Header file containing functions for logical operations
 * @version 0.1
 * @date 2021-04-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __LOGICGATES_H__
#define __LOGICGATES_H__

/**
 * @brief Function to perform logical AND operation
 * 
 * @param a input
 * @param b input
 * @return int 
 */
int AND(int a,int b);

/**
 * @brief Function to perform logical OR operation
 * 
 * @param a input
 * @param b input
 * @return int 
 */
int OR(int a,int b);

/**
 * @brief Function to perform logical NOT operation
 * 
 * @param a input
 * @return int 
 */
int NOT(int a);

/**
 * @brief Function to perform logical NAND operation
 * 
 * @param a input
 * @param b input
 * @return int 
 */
int NAND(int a,int b);

/**
 * @brief Function to perform logical NOR operation
 * 
 * @param a input
 * @param b input
 * @return int 
 */
int NOR(int a,int b);

/**
 * @brief Function to perform logical XOR operation
 * 
 * @param a input
 * @param b input
 * @return int 
 */
int XOR(int a,int b);

#endif