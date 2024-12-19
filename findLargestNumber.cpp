#include<iostream>
using namespace std;

int main(){

   int number = 8769543;
   int n = number;
   int remainder;
   int largest = 0;

   while(number != 0){
    remainder = number % 10;
    number = number / 10;

        if (remainder > largest){
            largest = remainder;
        }
   }

   cout<<"Largest digit in the number '" << n <<"' is: "<< largest;
}