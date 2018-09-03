/*
 *write a c++ program to find sum of all natural numbersbetween 1 to n.
 */
#include<iostream>
using namespace std;
int main(){
//declaring variables
int sum=0,n;
//loop
cout<<"the naturalnumber"<<endl;
cin >>n;
for (int i=1;i<=n;i++){
sum+=i;}
cout <<sum <<",";
return 0;
}
 
