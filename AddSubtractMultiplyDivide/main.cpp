#include <iostream>

using namespace std;

int main()
{
    int options, a, b, c;
    cout << "Menu\n";
    cout<<"\n1. Add\n" << "2. Subtract\n" << "3. Multiply\n" << "4. Divide\n" << endl;
    cout << "Enter number in menu: ";
    cin>>options;

    switch (options) {

    case 1:
        cout << "\n**********You Selected Addition*********" << endl;
        cout << "\nEnter number for a: ";
        cin >> a;
        cout << "Enter number for b: ";
        cin >> b;
        c = a + b;
        cout << "\nThe addition of a and b: " << c << endl;
        break;

    case 2:
        cout << "\n**********You Selected Subtraction*********" << endl;
        cout << "\nEnter number for a: ";
        cin >> a;
        cout << "Enter number for b: ";
        cin >> b;
        c = a - b;
        cout << "\nThe addition of a and b: " << c << endl;
        break;

    case 3:
        cout << "\n**********You Selected Multiplication*********" << endl;
        cout << "\nEnter number for a: ";
        cin >> a;
        cout << "Enter number for b: ";
        cin >> b;
        c = a * b;
        cout << "\nThe addition of a and b: " << c << endl;
        break;

    case 4:
        cout << "\n**********You Selected Division*********" << endl;
        cout << "\nEnter number for a: ";
        cin >> a;
        cout << "Enter number for b: ";
        cin >> b;
        c = a / b;
        cout << "\nThe addition of a and b: " << c << endl;
        break;

    default:
        cout << "Oppps! You typed invalid number" << endl;
    }

    return 0;
}
