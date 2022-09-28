#include <iostream>

using namespace std;

int main()
{
    int n, sum;
    cout << "Enter number: ";
    cin >> n;

    for(int i=0; i<=n; i++) {
        sum = sum+i;
    }
    cout << "Adding natural numbers: " << sum << endl;
    return 0;
}
