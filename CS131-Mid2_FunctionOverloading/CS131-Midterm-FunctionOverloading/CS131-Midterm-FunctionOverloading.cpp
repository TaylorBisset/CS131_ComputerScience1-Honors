/*
Write a program that has two functions with the same name (function overloading) to calculate the area of different shapes.

1.       The first function takes the radius of a circle as input and returns the area of the circle.

2.       The second function takes the length and width of a rectangle as input and returns the area of the rectangle.

Your main function should declare three variables, one for the radius of a circle and two for the length and width of a rectangle, respectively. Initialize the variables with the following values:

double radius = 5.0;

double length = 10.0;

double width = 8.0;

Your program should call both functions with the respective input values and print the results to the console in the following format:

The area of the circle with radius [radius] is: [area]

The area of the rectangle with length [length] and width [width] is: [area]



Note: You can assume that the value of radius is non-negative and the values of length and width are positive.


// Function to calculate the area of a circle given its radius
double calculateArea(double radius);


// Function to calculate the area of a rectangle given its length and width
double calculateArea(double length, double width);
*/
#include <iostream>

using namespace std;

double calculateArea(double radius) // Circle
{
	double areaCircle = pow(radius, 2) * 3.141592;
	return areaCircle;
}

double calculateArea(double length, double width) // Rectangle
{
	double areaRectangle = length * width;
	return areaRectangle;
}

int main()
{
	double radius = 5.0;
	double length = 10.0;
	double width = 8.0;

	double calculateArea(double radius);
	double calculateArea(double length, double width);

	double areaCircle = calculateArea(radius);
	double areaRectangle = calculateArea(length, width);

	cout << "The area of the circle with radius " << radius << " is: " << areaCircle << endl;
	cout << "The area of the rectangle with length " << length << " and width " << width << " is : " << areaRectangle << endl;

	return 0;
}

// 19 minutes