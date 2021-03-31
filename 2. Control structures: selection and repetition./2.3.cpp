/*2.3. Write a program that reads 2 integer numbers from the keyboard and tests whether their sum would produce overflow (the result would be greater than INT_MAX) or underflow (the result would be lower than INT_MIN). If this happens the program must show the message "sum overflow" or "sum underflow", otherwise it should show the result of the sum.*/

#include <iostream>
using namespace std;

int main() {
    int n1, n2, sum;
    cout << "Write two number to check if their sum produces overflow.";
    cin >> n1 >>n2;

    sum=n1+n2;

    if(n1 > 0 && n2 > 0 && sum < 0)
        cout << "sum underflow";
    if(n1 < 0 && n2 < 0 && sum > 0)
        cout << "sum overflow";
    else
        cout << sum;
}
