#include <iostream>

using namespace std;

float sum(float a, float b){
    return a+b;
}

int sum(int x, int y, int z){
    return x+y+z;
}

int main()
{
    cout << sum(2.2,3.3) << endl;
    cout << sum(1,2,3) << endl;
    return 0;
}
