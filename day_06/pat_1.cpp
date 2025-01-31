#include <iostream>
using namespace std;

/*
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 */

int main()
{

    // int row, col;

    // for (row = 1; row <= 5; row = row + 1)
    // {
    //     // print * 5 times
    //     for (col = 1; col <= 5; col = col + 1)
    //     {
    //         cout << "*" << " ";
    //     }
    //     // break line
    //     cout << endl;
    // }

    // homework

    /*
     10 10 10 10 10 -> rows
     10 10 10 10 10 -> rows
     10 10 10 10 10 -> rows
     10 10 10 10 10 -> rows
     */

    int row, col;

    for (row = 1; row <= 4; row = row + 1)
    {
        // print "10" 5 times
        for (col = 1; col <= 4; col = col + 1)
        {
            cout << "10" << " ";
        }
        cout << endl;
    }

    return 0;
}