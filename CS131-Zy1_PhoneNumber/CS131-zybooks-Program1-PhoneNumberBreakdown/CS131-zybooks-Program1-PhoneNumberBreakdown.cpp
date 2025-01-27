#include <iostream>
#include <string>

using namespace std;

int main()
{
    string phoneNumber;
    getline(cin, phoneNumber);

    auto areaCode = phoneNumber.substr(0, 3);
    auto prefix = phoneNumber.substr(3, 3);
    auto lineNumber = phoneNumber.substr(6);

    cout << "(" << areaCode << ") " << prefix << "-" << lineNumber << endl;

    return 0;
}

/*
Given a string representing a 10-digit phone number, output the area code, prefix, 
and line number using the format (800) 555-1212.

Ex: If the input is:

8005551212
the output is:

(800) 555-1212
Hint: Use the modulo and division operations.

For simplicity, assume all phone numbers are 10-digit. So 18005551212 is not allowed.
*/