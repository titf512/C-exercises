/*2.8. a) Write a program that displays on the screen a table of sines, cosines and tangents of the angles in the range [0..90] degrees, with intervals of 15 degrees, as shown below (note the particular case of the last line, corresponding to the 90 degree angle).
*/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double ang = 0;
    const double pi = 3.14159265358979323846;

    //Header line
    cout << setw(3) << "ang" << setw(20) << "sin" << setw(20) << "cos" << setw(20) << "tan" << endl;

    // ang, sin, cos, tan
    for (ang; ang<91*pi/180; ang+=15*pi/180) {

        // Problems tan(ang)
        if (floorf(cos(ang) * 100) / 100== 0) {
            std::cout << std::setprecision(6) << std::fixed;
            cout << setw(3) << setprecision(0) << ang * 180 / pi << setw(20) << setprecision(6) << sin(ang) << setw(20)
                 << cos(ang) << setw(20) << "infinite" << endl;
        }
        else {
            cout << fixed;
            cout << setw(3) << setprecision(0) << ang * 180 / pi << setw(20) << setprecision(6) << sin(ang) << setw(20)
                 << cos(ang) << setw(20) << tan(ang) << endl;
        }
    }
    return 0;
}



/*b) Change the program you developed in a) so that the range limits and the interval of the value of the angles in the table can be specified by the user (for example, if the range is [0..1] and the increment is of 0.1 degrees, the table for the angles of 0, 0.1, 0.2,…, and 1 degree should be displayed).
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double ang, min, max, increment;
    const double pi = 3.14159265358979323846;

    cout << "Which are the range limits for the angles in degrees? (min, max)" << endl;
    cin >> min >> max;
    cout << "What is the increment value?";
    cin >> increment;

    ang = min;

    //Header line
    cout << setw(3) << "ang" << setw(20) << "sin" << setw(20) << "cos" << setw(20) << "tan" << endl;

    // ang, sin, cos, tan
    for (ang; ang<max*pi/180; ang+=increment*pi/180) {

        // Problems tan(ang)
        if (floorf(cos(ang) * 100) / 100== 0) {
            std::cout << std::setprecision(6) << std::fixed;
            cout << setw(3) << setprecision(0) << ang * 180 / pi << setw(20) << setprecision(6) << sin(ang) << setw(20)
                 << cos(ang) << setw(20) << "infinite" << endl;
        }
        else {
            cout << fixed;
            cout << setw(3) << setprecision(0) << ang * 180 / pi << setw(20) << setprecision(6) << sin(ang) << setw(20)
                 << cos(ang) << setw(20) << tan(ang) << endl;
        }
    }
    return 0;
}

