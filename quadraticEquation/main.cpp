#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, result;
    a = 1;
    b = 1;
    c = 2;
    result = (-b-sqrt(b*b - 4*a*c))/(2*a);
    cout << "Result: " << result << endl;
    return 0;
}
