#include <iostream>

using namespace std;

int main()
{
    float speed, u, v, a;

    cout << "Value of U: ";
    cin >> u;

    cout << "Value of V: ";
    cin >> v;

    cout << "Value of A: ";
    cin >> a;

    speed = (v*v) - (u*u) / (2*a);

    cout << "Speed: " << speed << endl;
    return 0;
}
