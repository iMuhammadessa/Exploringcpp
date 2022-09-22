#include <iostream>

using namespace std;

int main()
{
    int day;
    cout << "Enter day number: ";
    cin >> day;

    if(day == 1){
        cout << "Hey, Today is Monday!" << endl;
    }
    else if(day == 2){
        cout << "Hey, Today is Tuesday!" << endl;
    }
    else if(day == 3){
        cout << "Hey, Today is wednesday!" << endl;
    }
    else if(day == 4){
        cout << "Hey, Today is Thursday!" << endl;
    }
    else if(day == 5){
        cout << "Hey, Today is Friday!" << endl;
    }
    else if(day == 6){
        cout << "Hey, Today is Saturday!" << endl;
    }
    else if(day == 7){
        cout << "Hey, Today is Sunday!" << endl;
    }
    else{
        cout << "Type number from 1 to 7 for days!" << endl;
    }

    return 0;
}
