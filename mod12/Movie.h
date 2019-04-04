/*
 * =====================================================================================
 *
 *       Filename:  Movie.h
 *
 *    Description:  Movie class declaration
 *
 *        Version:  1.0
 *        Created:  04/04/2019 09:40:03 AM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Colten Eden (), colteneden@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  MOVIE__INC__
#define  MOVIE__INC__
#include <iostream>
#include <string>
using namespace std;

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
        string get_title() const;
        int get_year() const;

}; // end of Movie class

#endif /* ----- #ifndef MOVIE__INC__ ----- */

