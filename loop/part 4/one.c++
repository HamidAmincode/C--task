#include <iostream>
using namespace std;

int main() {

    int num = 0;
    
   for (int i = 0;i <= 10; i++)
   {
    cout << "Enter number";
    cin >> num;
    if (num == -1)
    {
        break;
    }
   }
   
}