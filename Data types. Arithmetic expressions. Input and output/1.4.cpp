/*1.4	The solution to a system of linear equations in two variables (x e y) 
 
is given by
 x = (c·e - b·f) / (a·e - b·d) 
y = (a·f - c·d) / (a·e - b·d) 
Write a program that reads the values of a, b, c, d, e e f and determines the solution of the corresponding system of equations. Consider only the cases when there is a solution (it is not an impossible or inconsistent system).
*/

#include <iostream>
using namespace std;
int main() {
    double a,b,c,d,e,f,x,y;
    cout << "Given the system of type:\na·x + b·y = c \nd·x + e·y = f\nchoose the values of a,b,c,d,e and f to find the solution.";
    cin >> a >> b >> c >> d >> e >> f;

    x =  (c*e - b*f)/ (a*e - b*d);
    y =  (a*f - c*d) / (a*e - b*d);

    cout << "The value of x is " << x << " and the value of y is " << y;
    return 0;
}
