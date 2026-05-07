#include <iostream>
using namespace std;

int main() {
    
   int i = 1;

    while(i <= 100) {
    if(i % 2 == 0) {
        cout << i << " Even" << endl;
    } else {
        cout << i << " Odd" << endl;
    }
    i++;
    }   

}