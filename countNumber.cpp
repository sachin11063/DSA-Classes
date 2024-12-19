#include<iostream>
using namespace std;


int main(){

   int number = 4567897;
   int  count = 0;

   while(number != 0){
    number = number/10;
    count++;
   }
   
   cout<<"Total number of digit is: " << count;
}