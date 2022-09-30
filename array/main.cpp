#include <iostream>

using namespace std;

int main()
{
    //int A[5] = {1,2,3,4,5};

    //for(int i=0; i<5; i++){
    //    cout << A[i] << endl;
    //};

    //for(int x:A){
    //    cout << x << endl;
    //}

    //char C[] = {'A', 66, 'C', 68};
    //for (char x:C){
    //    cout << x << endl;
    //}

    int S[3] = {1,2,3};
    int sum = 0;

    for(int i=0; i<3; i++){
        sum = sum+S[i];
    }
    cout << sum << endl;
    cout << endl;

    return 0;
};
