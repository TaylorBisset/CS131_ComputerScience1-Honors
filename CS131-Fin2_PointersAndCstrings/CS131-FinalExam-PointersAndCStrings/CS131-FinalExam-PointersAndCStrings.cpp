/*
Write a program in C++ using pointers and cstrings to count total number of the letter e, 
    the digit 1 and the special character @ in a string.

Test Data:
Input the string: EvCC was founded in 1941 and educates more than 19,000 students every year. 
    We start the workday @ 7:00 AM and finish @ 8:00 PM.

Expected Output:

         Number of letter 'e' in the string is: 10

         Number of 1s in the string is: 3

         Number of Special character @ in the string is: 2

Hint: You can use the function fgets to input characters from stream and stores them as a C string. 
    http://www.cplusplus.com/reference/cstdio/fgets/Links to an external site.

char * fgets (char * str, int num, FILE * stream);

Example:

      char cstrInput[500];
      fgets(cstrInput, sizeof cstrInput, stdin); // this allows you to take the input from the user and store it in a cstring
      Output Sample:
      https://quiz-api-production-s3-uploads-9bc92eovor5s.s3.amazonaws.com/item_media/1528bc34-5970-4715-b575-4b2ab76b184e/27631921-9e4a-4bbf-aab9-cdad3f625875
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num_a = 0;
    int num_1 = 0;
    int num_ats = 0;
    string userInput;
    //getline(cin, userInput);
    userInput = "EvCC was founded in 1941 and educates more than 19,000 students every year. We start the workday @ 7:00 AM and finish @ 8:00 PM.";

    for (char c : userInput)
    {
        if (c == 'a')
        {
            num_a++;
        }
        if (c == '1')
        {
            num_1++;
        }
        if (c == '@')
        {
            num_ats++;
        }
    }
    cout << "Input: " << userInput << endl;
    cout << "Number of letter 'e' in the string is: " << num_a << endl;
    cout << "Number of 1s in the string is: " << num_1 << endl;
    cout << "Number of Special character @ in the string is: " << num_ats << endl;

    return 0;
}
