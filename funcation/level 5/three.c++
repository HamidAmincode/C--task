#include <iostream>
#include <string>
using namespace std;


int larger(int a, int b){
    if (a > b)
    return a;
    else
    return b;

    
}

int main() {

    int one;
    int two;
    cout << "Enter two number to know who is larger" << endl;
    cout << "First number >>";
    cin >> one;
    cout << "Second number >>";
    cin >> two;

    cout << "The greater nummber is:" << larger(one,two);
}