/**
 * @file main.c
 * @author Shreya
 * @brief Main function of the project
 * @version 0.1
 * @date 2021-04-11 
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include "logicgates.h"

typedef int i;

int main()
{
    i N,a,b,res;
    i (*fp)(int,int);
    while(1){
        printf("Select the function to be performed from the list given below- \n1.AND operation \n2.OR operation \n3.NOT operation \n4.NAND operation \n5.NOR operation \n6.XOR operation \n7.Press -1 to exit \nEnter your choice : ");
        scanf("%d",&N);
        switch(N){
            case 1:scanf("%d %d",&a,&b);
                   fp=&AND;
                   res=fp(a,b);
                   break;

            case 2:scanf("%d %d",&a,&b);
                   fp=&OR;
                   res=fp(a,b);
                   break;

            case 3:scanf("%d",&a);
                   res=NOT(a);
                   break;

            case 4:scanf("%d %d",&a,&b);
                   fp=&NAND;
                   res=fp(a,b);
                   break;

            case 5:scanf("%d %d",&a,&b);
                   fp=&NOR;
                   res=fp(a,b);
                   break;

            case 6:scanf("%d %d",&a,&b);
                   fp=&XOR;
                   res=fp(a,b);
                   break;

            case -1:return 0;

            default:printf("Invalid option\n");
        }
        printf("%d\n",res);
    }
    return 0;
}