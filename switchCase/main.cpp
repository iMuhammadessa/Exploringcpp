#include <iostream>

using namespace std;

int main()
{
    int day;
    cout << "Enter day number: ";
    cin >> day;

    switch(day)
    {
        case 1:
            cout << "Today is Monday!" << endl;
            break;

        case 2:
            cout << "Today is Tuesday!" << endl;
            break;

        case 3:
            cout << "Today is Wednesday!" << endl;
            break;

        case 4:
            cout << "Today is Thursday!" << endl;
            break;

        case 5:
            cout << "Today is Friday!" << endl;
            break;

        case 6:
            cout << "Today is Saturday!" << endl;
            break;

        case 7:
            cout << "Today is Sunday!" << endl;
            break;

        default: cout << "Type number from 1 to 7, GO!" << endl;
    }

    return 0;
}
