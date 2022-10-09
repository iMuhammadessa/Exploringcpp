#include <iostream>

using namespace std;

template<class T>
T maxim(T a, T b) {
    return a>b?a:b;
}

int main()
{
    cout << maxim(10,12) << endl;
    cout << maxim(10.2,12.3) << endl;
    cout << maxim(10.2f,12.5f) << endl;
    return 0;
}
