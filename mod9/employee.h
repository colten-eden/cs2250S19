/*
 * =====================================================================================
 *
 *       Filename:  employee.h
 *
 *    Description:  Employee Library
 *
 *        Version:  1.0
 *        Created:  03/12/2019 10:08:59 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Colten Eden (), colteneden@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  EMPLOYEE__INC__
#define  EMPLOYEE__INC__
    
// Constants & Globals
typedef struct Employee
{
    int idNum;
    double payRate;
    double hours;
    double netPay;
    double taxRate;
    double grossPay;

}Employee;

#define TAXRATE1 0.10         // 10%
#define TAXRATE2 0.25         // 25%
#define TAXRATE3 0.75         // 75%
// Function Prototypes
double CalcNet(Employee emp); // pass by value
double CalcGross(Employee* emp); // pass by reference
void CreateEmployee(Employee* emp);
void CalcPay(Employee* emp);
void DisplayEmp(const Employee* emp);
#endif /* ----- #ifndef EMPLOYEE__INC__ ----- */

