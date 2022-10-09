#include <iostream>

using namespace std;

int sum(int a, int b){
    return a+b;
}

int sum(int x, int y, int z){
    return x+y+z;
}

int max(int a, int b, int c){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int min(int a, int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}


int main()
{
    cout << sum(10,15) << endl;
    cout << sum(10,15,20) << endl;
    cout << max(15,20) << endl;
    cout << min(15,20) << endl;
    return 0;
}
