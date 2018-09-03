/*
 *write a c++ program to print all natural numbers in reverse(from n to 1).using while loop
 */
#include<iostream>
using namespace std;
int main(){
  //declaring variables
  int n=100;
  //loop
  while (n>=1){
  //print the natural numbers in reverse
  cout << n << endl;
  //subtracting 1 to predecessor
  n--;
  } return 0;
}
