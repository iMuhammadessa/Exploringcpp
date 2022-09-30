#include <iostream>

using namespace std;

int main()
{
    int A[5] = {1,2,3,4,5};
    int key;

    cout <<"Enter key value: ";
    cin >> key;

    for (int i=0; i<5; i++){
        if(key==A[i]) {
            cout << "Key value found at " << i << endl;
        exit(0);
        }
    }
    cout << "Value in array not found!" << endl;
    return 0;
}
