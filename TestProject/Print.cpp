#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    int sum = num1 + num2;
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;
    int i;
    for ( i = 0; i < num1; i++)
    {
        cout<<i<<" ";
    }
    return 0;
}
