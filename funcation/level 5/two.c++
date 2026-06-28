#include <iostream>
#include <string>
using namespace std;


bool isPositive(int number) {

    if (number >= 0)
        return true;
    else
        return false;
}

int main() {

    int number;
    cout << "Number check even or odd" << endl;
    cout << "Enter number you want yo know"<< endl;
    cin >> number;
    
    bool x;
    x = isPositive(number);

    if (x == true)
        cout << "Positive";
    else
        cout << "negative";
    return 0;
}
