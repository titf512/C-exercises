/*2.5. Write a program to determine the roots of a quadratic equation Ax2+Bx+C=0, the coefficients A, B and C being provided by the user. The program must indicate whether the equation has 2 different real roots, 2 equal real roots or 2 complex roots, and the respective root values , with 3 decimal places. 
Example: 
Solution of Ax^2 + Bx + C = 0 
Insert the coefficients (A B C): 
2.5 -1 16 
The equation has 2 complex roots: 0.200+2.522i and 0.200-2.522i
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float a,b,c, discriminant ,root1, root2, real, complex;
    cout << "Ax2+Bx+C=0: A? B? C?";
    cin >> a >> b >> c;
    
    discriminant = pow(b,2)-4.0*a*c;
    cout << "discriminant:" << discriminant;

    if (discriminant>0){
        root1 == (-b+sqrt(discriminant))/(2.0*a);
        root2 == (-b-sqrt(discriminant))/(2.0*a);
        cout << "The equation has 2 different real roots:" << endl << "root1 = " << root1 << endl << "root2 = " << root2;
    }

    else if (discriminant==0){
        root1 = -b/(2.0*a);
        cout << "The equation has 1 real root:" << endl << "root1 = " << root1;
    }
    else if (discriminant<0){
        real = (-b/(2.0*a));
        complex = (sqrt(-discriminant))/(2*a);

        cout << "The equation has 2 different complex roots:" << endl << "root1 = " << real << "+" << complex << "i" << endl << "root2 = " << real << "-" << complex << "i";
    }

    return 0;
};
