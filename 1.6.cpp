/*1.6	The area of a triangle can be determined using the Heron's formula: area  sqrt( s(s  a)(s b)(s  c)) where s, a, b and c are, respectively, the semi-perimeter and the length of the 3 sides. Write a program that reads the coordinates of the 3 vertices of a triangle and calculates the area of the triangle, using that formula. Remember that the distance between 2 points whose coordinates are (x1,y1) e (x2,y2) is given by d = sqrt((x2 - x1)^2 + ( y2 - y1)^2).*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double area,x1,y1,x2,y2,x3,y3,a,b,c,s; // a is the distance between vertice 1 and vertice 2, b is the distance between vertice 2 and vertice 3, c is the distance between vertice 1 and vertice 3

    cout << "Vertice 1: x y";
    cin >> x1 >> y1;
    cout << "Vertice 2: x y";
    cin >> x2 >> y2;
    cout << "Vertice 3: x y";
    cin >> x3 >> y3;

    a =  sqrt(pow(x1 - x2,2) +  pow(y1 - y2,2));
    b =  sqrt(pow(x3 - x2,2) + pow(y3 - y2,2));
    c =  sqrt(pow(x1 - x3,2) +  pow(y1 - y3,2));
    s = double (a+b+c)/2.0;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    cout << area << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << s << endl;

    return 0;

}
