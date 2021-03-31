/*2.6. Write a program to determine and write the amount that a depositor can withdraw from the bank, after n years of depositing an amount q, where j% is the annual interest rate. The values of n, q and j must be specified by the user. Assume that interest at the end of each year is accrued to the deposited amount. */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double n,q,j;

    cout << "N?Q?J?";
    cin >> n >> q >> j;

    cout << q*pow((1+j),n);
    return 0;
}
