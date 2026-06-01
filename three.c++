#include <iostream>
using namespace std;

int main() {
    int num;
    int positive = 0;
    int negative = 0;

    for (;;)
    {
        cin >> num;

        if (num == 0)
            break;

        if (num > 0)
            positive++;
        else
            negative++;
    }

    cout << "Positive = " << positive << endl;
    cout << "Negative = " << negative << endl;

    return 0;
}