#include <iostream>

using namespace std;

int main()
{
    string str;
    cout << "What is your name: ";
    getline(cin, str);
    cout << "My name is " << str <<endl;
    return 0;
}
