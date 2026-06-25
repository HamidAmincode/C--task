#include <iostream>
#include <conio.h>
using namespace std;

int greet(int half) {
    int x = half / 2;
    return x;
}

int main() {

     int count = 0;
    do
    {
        
        int half;
        cout << "Enter the number who half you want:";
        cin >> half;
        
        cout << "Half<=>>>>>>>>>>>>     "<< greet(half) << "     <<<<<<<<<<<=><Half"<< endl;
        
        cout << "Press any key to continue..." << endl;

        getch();

        count++;
        
    } while ( count < 5);

    return 0;
}   