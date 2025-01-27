/*
Write a function DrivingCost() with input parameters milesPerGallon, 
dollarsPerGallon, and milesDriven that returns the dollar cost to drive those miles. 
All items are of type double. The function called with arguments (20.0, 3.1599, 50.0) returns 7.89975.

Define that function in a program whose inputs are the car's miles per gallon and the 
price of gas in dollars per gallon (both doubles). 
Output the gas cost for 10 miles, 50 miles, and 400 miles, by calling your DrivingCost() function three times.

Output each floating-point value with two digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(2); once before all other cout statements.

The output ends with a newline.

Ex: If the input is:

20.0 3.1599
the output is:

1.58 7.90 63.20
Your program must define and call a function:
double DrivingCost(double milesPerGallon, double dollarsPerGallon, double milesDriven)
*/

#include <iostream>
#include <iomanip>               // For setprecision
using namespace std;

double DrivingCost(double milesPerGallon, double dollarsPerGallon, double milesDriven)
{
	double costPerMile = (milesDriven / milesPerGallon * dollarsPerGallon);
	return costPerMile;
}

int main() {
	double milesPerGallon, dollarsPerGallon, milesDriven;
	cin >> milesPerGallon >> dollarsPerGallon;

	cout << fixed << setprecision(2);
	cout << DrivingCost(milesPerGallon, dollarsPerGallon, 10.0)  << " ";
	cout << DrivingCost(milesPerGallon, dollarsPerGallon, 50.0)  << " ";
	cout << DrivingCost(milesPerGallon, dollarsPerGallon, 400.0) << endl;

	return 0;
}
