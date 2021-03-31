/*2.4. The cost of transporting a certain merchandise is determined, depending on its weight, as follows: if the weight is less or equal to 500 grams the cost is 5 euros; if the weight is between 501 grams and 1000 grams, inclusive, the cost is equal to 5 euros plus 1.5 euros for each additional 100 grams or fraction above 500 grams; if the weight exceeds 1000 grams, the cost is 12.5 euros plus 5 euros for each additional 250 grams or fraction above 1000 grams. Write a program that, given the weight of a certain merchandise, determines the cost of its transportation.*/

#include <iostream>
using namespace std;

int main(){
     int weight;
     float costTransportation;
     cout << "Weight(g)?";
     cin>> weight;

     if (weight<=500){
         costTransportation = 5;
     }
     else if (weight>=501 && weight<1000){
         costTransportation = 5;
         weight -= 500;
         while (weight>0){
             costTransportation += 1.5 ;
             weight-=100;
         }
     }
    else if (weight>1000){
        costTransportation = 12.5;
        weight -= 1000;
        while (weight>0){
            costTransportation += 5 ;
            weight -= 250;
        }
    }

    cout << "The transportation cost is " << costTransportation << endl;
    return 0;
};
