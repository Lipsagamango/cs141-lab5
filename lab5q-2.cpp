/*
 *write a c++ program to find maximum between three numbers.
 */
#include<iostream>
using namespace std ;
int main (){
    //declearing variables
    float a,b,c,max;
    //enter the numbers
    cout << "what are the three numbers" <<endl;
    cin >> a >> b >> c;
    //condition
    if (a > b && a > c){ 
	max = a;
    } 
    else if ( b > c){ 
       max = b;
     }
    else {
	max = c;
  }
       //print the results
      cout << max << "is the maximum number" << endl;
  }
           
     
        
