/*
 * =====================================================================================
 *
 *       Filename:  employee.c
 *
 *    Description:  Define an employee stucture for record keeping
 *
 *        Version:  1.0
 *        Created:  03/12/2019 09:10:03 AM
 *       Revision:  none
 *       Compiler:  gcc employee.c -o employee.out -lm
 *          Usage:  ./employee.out
 *
 *         Author:  Colten Eden (), colteneden@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
// Constants & Globals
typedef struct Employee
{
    int idNum;
    double payRate;
    double hours;

}Employee;
// Function Prototypes
double CalcNet(Employee emp);
// Main Function
int main(int argc, char* argv[])
{
    double netPay = 0;
    Employee waldo = {1, 7.50, 20};
    netPay = CalcNet(waldo);
    printf("Hi Waldo, your net pay for %lf hours at %lf rate is %lf\n",
            waldo.hours, waldo.payRate, netPay);



    return 0;
}
// Function Defenitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CalcNet
 *  Description:  Calculate the net pay based on payRate and hours
 *    Param: Employee structure
 *    Return: Net Pay as double
 * =====================================================================================
 */
double CalcNet(Employee emp)
{
    return emp.payRate * emp.hours;
}

