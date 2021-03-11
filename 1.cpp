/* Write a program that reads a letter or other symbol from the keyboard and shows its ASCII code */

#include <iostream>
using namespace std;
int main() {
	char letterSymbol;
    cout << "Write a letter or symbol." << endl;
    cin >> letterSymbol;
    cout << int (letterSymbol);
    return 0;
}
