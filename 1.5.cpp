/*1.5	a) Write a program that reads two times, expressed in hours, minutes and seconds, and determines their sum. The dialog with the user must be similar to the following: 
Time1 (hours minutes seconds) ? 10 35 50 
Time2 (hours minutes seconds) ? 15 59 30 
Time1 + Time2 = 1 day, 2 hours, 35 minutes and 20 seconds */

/*#include <iostream>
using namespace std;
 int main(){
    int hours1,minutes1,seconds1,hours2,minutes2,seconds2,hoursf,minutesf,secondsf, days;
    cout << "Time1 (hours minutes seconds) ? ";
    cin >> hours1 >> minutes1 >> seconds1;
    cout << "Time2 (hours minutes seconds) ? ";
    cin >> hours2 >> minutes2 >> seconds2;

    secondsf = seconds1+seconds2;
    hoursf = hours1+hours2;
    minutesf = minutes1+minutes2;
    days = 0;

    if (secondsf<60) {
        secondsf = secondsf;
    }
    else{
        while (secondsf>=60){
            secondsf-=60;
            minutesf+=1;
        }
    }

    if (minutesf<60) {
        minutesf = minutesf;
    }
    else{
        while (minutesf>=60){
            minutesf-=60;
            hoursf+=1;
        }
    }

    if (hoursf<24) {
        hoursf = hoursf;
    }
    else{
        while (hoursf>=24){
            hoursf-=24;
            days+=1;
        }
    }

    cout << "Time1 + Time2 = " << days << "days, " << hoursf << " hours " << minutesf << " minutes and " << secondsf << "seconds.";

} */




/* b) Modify the program so that the user must input a separator between hours, minutes and seconds (ex: 10:35:50). Although the separator usually used is ':', consider that any separator is valid.*/

/*
#include <iostream>
using namespace std;
 int main(){
    int hours1,minutes1,seconds1,hours2,minutes2,seconds2,hoursf,minutesf,secondsf, days;
    char separator;
    cout << "Time1 (hours minutes seconds) ? ";
    cin >> hours1 >> separator >> minutes1 >> separator >> seconds1;
    cout << "Time2 (hours minutes seconds) ? ";
    cin >> hours2 >> separator >> minutes2 >> separator >> seconds2;

    secondsf = seconds1+seconds2;
    hoursf = hours1+hours2;
    minutesf = minutes1+minutes2;
    days = 0;

    if (secondsf<60) {
        secondsf = secondsf;
    }
    else{
        while (secondsf>=60){
            secondsf-=60;
            minutesf+=1;
        }
    }

    if (minutesf<60) {
        minutesf = minutesf;
    }
    else{
        while (minutesf>=60){
            minutesf-=60;
            hoursf+=1;
        }
    }

    if (hoursf<24) {
        hoursf = hoursf;
    }
    else{
        while (hoursf>=24){
            hoursf-=24;
            days+=1;
        }
    }

    cout << "Time1 + Time2 = " << days << "days, " << hoursf << " hours " << minutesf << " minutes and " << secondsf << "seconds.";

} */
