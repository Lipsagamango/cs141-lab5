/*
 *write a c++ program to input any alphabetand check whether it is vowel or consonant.
 */
#include<iostream>
using namespace std;
int main(){
 //declaring variable
 char x,a,e,i,o,u;
 //enter the alphabet
 cout <<"what is the alphabet?"<<endl;
 cin >> x;
 //condition
 if (x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
 cout << x <<"is a vowel"<< endl;
 }
 else {
 cout << x <<"is a consonant"<<endl;
 }
 return 0;
 }
 

