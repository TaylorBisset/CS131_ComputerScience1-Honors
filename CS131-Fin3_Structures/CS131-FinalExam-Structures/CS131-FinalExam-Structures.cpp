/*
Develop a program that encompasses the following requirements:

Create a Date structure capable of storing the day, month, and year. (2 pts)
Construct a Student structure, equipped with fields for the student's name, ID, 
    and a member of the aforementioned Date structure to represent the student's birthday. (2 pts)
Design an Instructor structure, incorporating fields for the instructor's name, ID, department, 
    and a member of the Date structure to denote the instructor's birthday. (2 pts)
Within the main function, utilize pointers to instantiate two variables of types Student and Instructor 
    (Ensure the usage of the new keyword). Assign the variables with the following values: (4 pts)
For the Student variable, provide your own name, your unique ID, and today's date.
For the Instructor variable, assign "John" as the name, 123 as the ID, "CS" as the department, and today's date as the birthday.
Display the stored information in your variables using the cout command. (2 pts)
*/



#include <iostream>

using namespace std;

struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    string name;
    int ID;
    Date birthday;
};
struct Instructor
{
    string name;
    int ID;
    string department;
    Date birthday;
};

int main()
{
    Student* studentPtr = new Student;
    studentPtr->name = "Taylor";
    studentPtr->ID = 202389079;
    studentPtr->birthday.day = 24;
    studentPtr->birthday.month = 8;
    studentPtr->birthday.year = 2023;
    cout << studentPtr->name << endl;
    cout << studentPtr->ID << endl;
    cout << studentPtr->birthday.day << "-" << studentPtr->birthday.month << "-" << studentPtr->birthday.year << endl;

    cout << endl;

    Instructor* instructorPtr = new Instructor;
    instructorPtr->name = "John";
    instructorPtr->ID = 123;
    instructorPtr->department = "CS";
    instructorPtr->birthday.day = 24;
    instructorPtr->birthday.month = 8;
    instructorPtr->birthday.year = 2023;
    cout << instructorPtr->name << endl;
    cout << instructorPtr->ID << endl;
    cout << instructorPtr->department << endl;
    cout << instructorPtr->birthday.day << "-" << instructorPtr->birthday.month << "-" << instructorPtr->birthday.year << endl;

    return 0;
}
