#include <iostream>

using namespace std;

/*
Write a program that will calculate the value of some coins.

Your program will need to ask the user how many 
quarters (25 cent coin), dimes (10 cent coin), nickels (5 cent coin), and pennies (1 cent coin) 
they have and then it will repeat back to them the quantity of each coin type and the total value 
for all coins shown in typical dollar and cents format ($5.34).
*/

int main()
{
    int quarters = 1;
    int dimes = 1;
    int nickels = 1;
    int pennies = 1;

    cout << "How many 'quarters' do you have? ";
    cin >> quarters;
    cout << "How many 'dimes' do you have? ";
    cin >> dimes;
    cout << "How many 'nickels' do you have? ";
    cin >> nickels;
    cout << "How many 'pennies' do you have? ";
    cin >> pennies;

    double quarterCost = quarters * 0.25;
    double dimesCost = dimes * 0.10;
    double nickelsCost = nickels * 0.05;
    double penniesCost = pennies * 0.01;
    double totalAmount = quarterCost + dimesCost + nickelsCost + penniesCost;
    cout << endl;

    cout << "You have " << quarters << " quarters, " << dimes << " dimes, ";
    cout << nickels << " nickels, and " << pennies << " pennies.\n";
    cout << "Your total dollar amount is $" << totalAmount << endl;

    return 0;
}
