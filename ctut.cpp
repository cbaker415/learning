#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    int myFavNums [5];

    int BadNums[5] =
    {
    4, 13, 14, 24, 34
    };

    cout << "Bad number 1: " << BadNums[4] <<endl;

    char myName[6][6] =
    {
    {'C', 'o', 'l', 't', 'o', 'n'},
    {'B', 'a', 'k', 'e', 'r', 'o' }
    };

    cout << "2nd Letter in 2nd array is " << myName[1][1] << endl;

    myName[0][3] = 'l';

    cout << myName[3][3];

return 0;
}

// This is a change to this file

//Change to the the test2 file maybe?
