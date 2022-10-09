#include <iostream>

using namespace std;

int max(int a, int b=0, int c=0) {
    return a>b && a>c ? a:(b>c?b:c);
}

int main()
{
    cout << max(3,4,5) << endl;
    return 0;
}
