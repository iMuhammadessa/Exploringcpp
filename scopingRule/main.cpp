#include <iostream>

using namespace std;

int main()
{
    int a = 10; // Global variable

    // Block one
    {
        int b = 30;
        cout << b << endl;

        // Block two
        {
            int c = 20;
             cout << c << endl;
        }
    }
    cout << a << endl;

    return 0;
}
