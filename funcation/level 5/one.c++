#include <iostream>
#include <string>
using namespace std;

bool isEven(int number)
{

    if (number % 2 == 0)
        return true;
    else
        return false;
}

// bool isOdd(int number)
// {
//     if (number % 2 != 0)
//         return true;
//     else
//         return false;
// }

// bool isOdd(int number)
// {

//     if (number % 2 == 0)
//         return false;
//     else
//         return true;
// }

int main()
{

    int number;
    cout << "Number check even or odd" << endl;
    cout << "Enter number you want yo know" << endl;
    cin >> number;

    bool x;
    x = isEven(number);

    if (x == true)
        cout << "Even";
    else
        cout << "ODD";

    return 0;
}
