/*
 * =====================================================================================
 *
 *       Filename:  first_class.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/04/2019 08:35:58 AM
 *       Revision:  none
 *       Compiler:  gcc first_class.cpp -o first_class.out -lm
 *          Usage:  ./first_class.out
 *
 *         Author:  Colten Eden (), colteneden@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */

#include <iostream>
using namespace std;
// Constants
struct Movie
{
    string title = "";
    int year = 0;                // data member
    bool equals(const Movie&);  // member function declaration
};
// Function Prototypes
bool Equals(const Movie& my_movie, const Movie& to_compare);
// Main Function
int main(int argc, char* argv[])
{
    Movie movie;
    movie.title = "Batman";
    movie.year = 2008;

    cout << "MOVIE DATA" << endl
        << "Title:   " << movie.title << endl
        << "Year:    " << movie.year << endl;

    Movie movie2;
    movie2.title = "Batman";
    movie2.year = 2008;

    cout << "MOVIE DATA" << endl
        << "Title:   " << movie2.title << endl
        << "Year:    " << movie2.year << endl;
    // Test for equal values
    // The equivalent of typing: movie == movie2
if(Equals(movie, movie2))
{
    cout << "PF: Movies are equal" << endl;
}
else 
{
    cout << "PF: Movies are not equal" << endl;
}
//Now use the member funtion instead of the programfunction
if(movie.equals( movie2))
{
    cout << "MF: Movies are equal" << endl;
}
else
{
    cout << "MF: Movies are not equal" << endl;
}

    return 0;
}
// Function Defenitions
bool Equals(const Movie& my_movie, const Movie& to_compare)
{
    return (my_movie.title == to_compare.title &&
            my_movie.year == to_compare.year);
}

// Member function definition
bool Movie::equals(const Movie& to_compare)
{
    return(title == to_compare.title && 
            year == to_compare.year);
}







