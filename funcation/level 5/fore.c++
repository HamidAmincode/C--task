#include <iostream>
#include <string>
using namespace std;

char grade(int marks){

    if (marks >= 90)
        return 'A';
    else if (marks >= 80)
        return 'B';
    else if (marks >= 70)
        return 'C';
    
    return 'D';
}

int main() {
    int marks;
    cout << "Enter your marks" << endl;
    cin >> marks;
    cout << "Your marks is:" << grade(marks);
}