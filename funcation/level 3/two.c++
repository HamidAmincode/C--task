#include <iostream>
#include <conio.h>
using namespace std;

int greet(int square) {
    int x = square*square;
    return x;
}

int main() {

     int count = 0;

    do
    {
        
        int square;
        cout << "Enter the number who square you want:";
        cin >> square;
        
        cout << "SQUARE>>>>>>>>>>>>     "<< greet(square) << "     <<<<<<<<<<<<SQUARE"<< endl;
        
        cout << "Press any key to continue..." << endl;

        getch();

        count++;
        
    } while ( count < 5);

    return 0;
}   