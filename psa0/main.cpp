#include <iostream>

using namespace std;
int main()
{
    char fname[20];
    char lname[25];
    char color[10];
    int16_t number;
    cout << "What is your first name" << endl;
    cin >> fname;
    cout << "What is your last name" << endl;
    cin >> lname;
    cout << "What is your color" << endl;
    cin >> color;
    cout << "What is your number" << endl;
    cin >> number;
    cout << "your name is: " << fname << " " << lname << endl;
    cout << "your favorite color is " << color << " and your favorite number is " << number << endl;
    return 0;
}
