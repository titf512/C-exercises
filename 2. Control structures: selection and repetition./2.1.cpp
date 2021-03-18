/*2.1. Solve again problem 1.4 (solution of a system of linear equations in two variables), so that when the system is impossible or inconsistent (a system having infinite solutions) a message is shown to the user: "impossible system" or "inconsistent system".*/

#include <iostream>
using namespace std;

int main() {
    double a,b,c,d,e,f,x,y;
    cout << "Given the system of type:\na·x + b·y = c \nd·x + e·y = f\nchoose the values of a,b,c,d,e and f to find the solution.";
    cin >> a >> b >> c >> d >> e >> f;

    x =  (c*e - b*f)/ (a*e - b*d);
    y =  (a*f - c*d) / (a*e - b*d);

    if ((a*e - b*d)==0){
        cout << "impossible system";
    }

    else if (x != x || y != y){
        cout << "Inconsistent system." << endl;
    }

    else{
        cout << "The value of x is " << x << " and the value of y is " << y;
    }

    return 0;
}
