#include <iostream>
using namespace std;

int main() {

    string num = "admin";
    
   for (int i = 0;i <= 10; i++)
   {
    cout << "Enter password:";
    cin >> num;
    if (num == "admin")
    {
        break;
    }
   }
}