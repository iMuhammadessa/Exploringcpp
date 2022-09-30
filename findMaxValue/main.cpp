#include <iostream>

using namespace std;

int main()
{
    int A[4] = {1,2,3,4};
    int max = -123;

    for (int i=0; i<4; i++){
        if(A[i]>max){
            max=A[i];
        }
    }
    cout << max;
    return 0;
}
