/*
 * =====================================================================================
 *
 *       Filename:  Moive.cpp
 *
 *    Description:  Movie Class
 *
 *        Version:  1.0
 *        Created:  04/04/2019 09:38:46 AM
 *       Revision:  none
 *       Compiler:  gcc Moive.cpp -o Moive.out -lm
 *          Usage:  ./Moive.out
 *
 *         Author:  Colten Eden (), colteneden@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <iostream>
#include "Movie.h"
using namespace std;

// Function Defenitions
void Movie::set_title(string set_title)
{
    // this-> refers to yourself
    this->title = set_title;
}
void Movie::set_year(int set_year)
{
    if(set_year < 1988)
    {
        throw invalid_argument("Year must be 1988 or later.");
    }
    year = set_year;
}

string Movie::get_title() const
{
    return title;
}

 int Movie::get_year() const
{
    return year;
}

