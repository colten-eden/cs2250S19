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
#include <iomanip> // more cout options
#include <string> // for strings
#include <vector> // for vectors "array with lots of features"
#include "Movie.h"
using namespace std;
// Constants
// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    cout << "The movie list Program" << endl << endl
        << "Enter a movie ..." << endl << endl;
    // get movies from user
//    Movie movies[10]; // array of 10 movies fixed to ten spots
    vector<Movie> movies; // define a vector of movies. grow on demand
    char another = 'y';
    //loop for entries
    while(tolower(another) == 'y')
    {
        cout << endl << "Enter another movie? (y|n): ";
        cin >> another;
        cin.ignore(); // ignore anything else in the buffer
        cout << endl;

    }// end of while loop


    return 0;
}


