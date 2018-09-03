/*
 *write a c++ program to check whether a number is negative,positive or 0.
 */
#include<iostream>
using namespace std;
int main(){
    //declearing variable
    float x;
    //enter the integer
    cout <<" what is the integer x?"<< endl;
    cin >> x;
    //condition 
    if (x>0){
     //if x is a positive integer 
    cout << x << "is a positive integer"<< endl;
    } 
    else if (x==0){
   //if x is zero
   cout << x << "is zero" << endl;
   }
   else{
   //if x is negative integer
   cout << x << "is a negative integer"<< endl;
 }
return 0;
  }  

