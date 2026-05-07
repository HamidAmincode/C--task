#include <iostream>
using namespace std;

int main() {
    
   int i = 1;
    int count = 0;

    while(i <= 100) {
    if(i % 2 == 0) {
        count++;
        }
    i++;
    }   

    cout << "Total even numbers: " << count;

}