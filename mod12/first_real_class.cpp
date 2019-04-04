/*
 * =====================================================================================
 *
 *       Filename:  first_real_class.cpp
 *
 *    Description:  Let's change the structure to a class
 *
 *        Version:  1.0
 *        Created:  04/04/2019 08:55:24 AM
 *       Revision:  none
 *       Compiler:  gcc first_real_class.cpp -o first_real_class.out -lm
 *          Usage:  ./first_real_class.out
 *
 *         Author:  Colten Eden (), colteneden@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// For C++ Code
#include <iostream>
using namespace std;
// Constants
class Movie
{
    // Only the member has access to
    private:
        string title = "";  // data members are private
        int year = 0;
    //Anyone has access to it
    //member functions are public
    public:
        // "Setters"
        void set_title(string set_title);
        void set_year(int set_year);
        // "Getters"
        string get_title();
        int get_year();

}; // end of Movie class
// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    // Create an "object"
    Movie movie; // create an "instance" of this class Movie
    // set youre values
//    movie.title = "Batman";   // illegal - no direct access
    movie.set_title("Batman");
    movie.set_year(2009);

    cout << "MOVIE DATA" << endl
        << "Title: " << movie.get_title() << endl
        << "Year:  " << movie.get_year() << endl;


    return 0;
}
// Function Defenitions
void Movie::set_title(string set_title)
{
    title = set_title;
    return;
}
void Movie::set_year(int set_year)
{
    if(set_year < 1988)
    {
        throw invalid_argument("Year must be 1988 or later.");
    }
    year = set_year;
    return;
}

string Movie::get_title()
{
    return title;
}

 int Movie::get_year()
{
    return year;
}



