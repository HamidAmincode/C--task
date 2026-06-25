#include <iostream>
#include <conio.h>
using namespace std;

int greet(int cube) {
    int x = cube*cube*cube;
    return x;
}

int main() {

     int count = 0;
    do
    {
        
        int cube;
        cout << "Enter the number who cube you want:";
        cin >> cube;
        
        cout << "cube>>>>>>>>>>>>     "<< greet(cube) << "     <<<<<<<<<<<<cube"<< endl;
        
        cout << "Press any key to continue..." << endl;

        getch();

        count++;
        
    } while ( count < 5000000000000000);

    return 0;
}   