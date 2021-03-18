/*2.2. a) Write a program that reads 3 numbers from the keyboard and determines the largest and the smallest number.*/

/*
#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

// Finding the largest number
    if(n1 >= n2 && n1 >= n3)
        cout << "Largest number: " << n1 << endl;

    else if (n2 >= n1 && n2 >= n3)
        cout << "Largest number: " << n2 << endl;

    else if (n3 >= n1 && n3 >= n2)
        cout << "Largest number: " << n3 << endl;

// Finding the smallest number
    if(n1 <= n2 && n1 <= n3)
        cout << "Smallest number: " << n1;

    else if (n2 <= n1 && n2 <= n3)
        cout << "Smallest number: " << n2;

    else if (n3 <= n1 && n3 <= n2)
        cout << "Smallest number: " << n3;
    return 0;
}
*/



/* b) Write a program that reads 3 numbers from the keyboard and writes them on the screen, in descending order.*/

/*#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3, n11, n22,n33;
    n1=n11;
    n2=n22;
    n3=n33;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    if(n1>n2){
        n2=n1;
        n1=n22;
        n22=n2;
    }
    if(n2>n3){
        n3=n2;
        n2=n33;
        n33=n3;
    }
    if(n1>n2){
        n2=n1;
        n1=n22;
        n22=n2;
    }

    cout << n3 << n2 << n1;
    
    return 0;
}
*/


/*c) Write a program that reads 3 positive numbers from the keyboard and determines if they can represent the length of the 3 sides of a triangle (tip: it is not possible to build a triangle if the sum of the 2 smallest lengths is smaller than the largest length). If any of the numbers is not positive the program must show an error message.*/

/*
#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3, n11, n22,n33;
    n1=n11;
    n2=n22;
    n3=n33;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    if(n1>n2){
        n2=n1;
        n1=n22;
        n22=n2;
    }
    if(n2>n3){
        n3=n2;
        n2=n33;
        n33=n3;
    }
    if(n1>n2){
        n2=n1;
        n1=n22;
        n22=n2;
    }


    if (n2+n1<n3)
        cout << "They can represent the length of the 3 sides of a triangle.";
    else
        cout << "They can't represent the length of the 3 sides of a triangle.";
    
    return 0;
}
*/
