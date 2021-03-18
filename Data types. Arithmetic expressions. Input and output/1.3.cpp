/*1.3	The mass of a sphere is given by the expression M = 4/3(p*pi*r**3 ) where M, p and r are, respectively, the mass of the sphere, the specific mass of the material from which it is made, and its radius. Write a program that, given the values of  and r, determines the value of M. The user must be informed about the units used to represent all the values: Kg/m3 , m and Kg for p, r and M, respectively. Use a constant to represent the value of pi.*/

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double m,p,r;
    const float pi=3.14;

    cout << "What is the value of p in Kg/m^3? ";
    cin >> p;
    cout << "What is the value of r in m? ";
    cin >> r;

    double a=pow(r,3);
    m = (4.0/3.0)*(p*pi*a);
    cout << "The mass of the sphere is " << m << " Kg.";

    return 0;
}
