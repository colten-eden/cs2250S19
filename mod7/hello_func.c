/*
 * =====================================================================================
 *
 *       Filename:  hello_func.c
 *
 *    Description:  Practice functions
 *
 *        Version:  1.0
 *        Created:  02/19/2019 08:48:21 AM
 *       Revision:  none
 *       Compiler:  gcc hello_func.c -o hello_func.out
 *
 *         Author:  Colten Eden (), colteneden@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes
void Hello_World();
void Hello_Number(int num);
int Get_Square(int num);
int Get_Number();
int Get_Sum(int num1,int num2);
// Main Function
int main(int argc, char* argv[])
{
    int i1 = 23;
    int num1, num2, sum;
    Hello_World();

    Hello_Number(i1);

    i1 = Get_Square(i1);
    Hello_Number(i1);
    
    i1 = Get_Number();
    Hello_Number(i1);

    num1 = Get_Number();
    Hello_Number(num1);
    num2 = Get_Number();
    Hello_Number(num2);
    sum = Get_Sum(num1, num2);
    Hello_Number(sum);
    return 0;
}

// Function Definitions
// To document your fu nctions type: cfu 

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Hello_world
 *  Description:  Print Hellow world message
 * =====================================================================================
 */
void Hello_World()
{
    printf("Hello World\n");
    return;
}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Hello_num
 *  Description:  Prints the value of a number
 *  Param1: num : integer value
 *  Return: nothing
 * =====================================================================================
 */
void Hello_Number(int num)
{
    printf("Hello %d number\n", num);
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Get_Square
 *  Description:  Get the square of an integer number
 *       Param1: num => integer value
 *       return: the square of num
 * =====================================================================================
 */
int Get_Square(int num)
{
    int square;
square = num * num;
    return square;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Get_Number
 *  Description:  Ask user to enter an int and return it
 *        Param: none
 *       Return: User int input
 * =====================================================================================
 */
int Get_Number()
{ 
    int input;
    // Algorithm
    printf("Please enter an integer value: ");
    scanf("%d", &input);
    return input;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Get_Sum
 *  Description:  Return the sum of two numbers
 *  Param1: First integer
 *  Param2: Second integer
 *  Return: First + Second
 * =====================================================================================
 */

int Get_Sum(int num1,int num2)
{
    printf("The sum of these number is: \n");
    return num1 + num2;
}

