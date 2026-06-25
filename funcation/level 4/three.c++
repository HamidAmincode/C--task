#include <iostream>
#include <string>
using namespace std;


void printTable(int num){
    
    for (int i = 0; i <= 10; i++)
    {
        cout << num << "x" << i << "=" << (num*i) << endl;
    }
    
}

int main() {

    int num;
    cout << "whose number table you want:";
    cin >> num;

    printTable(num);
    return 0;
}