/*2.7. A number n is prime if it is divisible only by itself and by one. 
a) Write a program that reads a number from the keyboard and determines if it is prime. Note: it is not necessary to test all divisors in the range [2..n[; it is enough to test divisors until the integer part of the square root of n. 
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int i, n;
    bool isPrime = true;

    cout << "Enter a positive integer: ";
    cin >> n;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for (i = 2; i <= sqrt(n); ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
        cout << n << " is a prime number";
    else
        cout << n << " is not a prime number";

    return 0;
}



/*b) Write a program that writes on the screen all the prime numbers lower than 1000. */


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int i, counter;
    bool isPrime = true;
    Const max = 1000;	

    counter = 0;

    while (counter < max){

        if (counter == 0 || counter == 1) {
            isPrime = false;
        }
        else {
            for (i = 2; i <= sqrt(counter); ++i) {
                if (counter % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime)
            cout << counter << endl;

        counter++;
        isPrime = true;

    }

    return 0;
}

/*c) Write a program that writes on the screen the first 100 prime numbers. */ 

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int i, counter, countNumbers;
    bool isPrime = true;
	
    counter = 0;
    countNumbers = 0;

    while (countNumbers < 100){

        if (counter == 0 || counter == 1) {
            isPrime = false;
        }
        else {
            for (i = 2; i <= sqrt(counter); ++i) {
                if (counter % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime) {
            cout << counter << endl;
            countNumbers++;
        }

        counter++;
        isPrime = true;

    }

    return 0;
}


/*d) Write a program that determines the largest prime number that can be stored in a varible of type unsigned long.*/


#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <cmath>
#include <cfloat>
using namespace std;

int main() {

    for (unsigned long ULONG_Max;ULONG_Max>0;ULONG_Max--){
        bool isPrime = true;


        // 0 and 1 are not prime numbers
        if (ULONG_Max == 0 || ULONG_Max == 1) {
            isPrime = false;
        }
        else {
            for (int i = 2; i <= sqrt(ULONG_Max); ++i) {
                if (ULONG_Max % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime){
            cout << ULONG_Max;
            break;
        }

    }
    return 0;

}

