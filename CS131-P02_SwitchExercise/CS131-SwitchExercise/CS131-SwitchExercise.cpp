#include <iostream>
#include <ctime>

using namespace std;

/*
Create 4000 random numbers between 1-4, and build a count for the
total number of each of the 4 numbers were chosen. We would hope
that the frequency would be around 1000 times for each of the
numbers in our selected range.
*/

int main()
{
    srand(time(0));
    int ones = 0;
    int twos = 0;
    int threes = 0;
    int fours = 0;
    int numCount = 0;

    while (numCount < 4000)
    {
        int randomNum = (rand() % 4) + 1;
        switch (randomNum)
        {
        case 1:
            ones++;
            numCount++;
            break;
        case 2:
            twos++;
            numCount++;
            break;
        case 3:
            threes++;
            numCount++;
            break;
        case 4:
            fours++;
            numCount++;
            break;
        }
    }
    
    cout << "Here is the results of 4000 random numbers with values 1 - 4:\n";
    cout << "ones: "   << ones   << endl;
    cout << "twos: "   << twos   << endl;
    cout << "threes: " << threes << endl;
    cout << "fours: "  << fours  << endl;

}
