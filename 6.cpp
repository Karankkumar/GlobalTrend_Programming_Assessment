// Write a function to find the factorial of a given number.The function should return the factorial of the number.
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
   if(n==0 or n==1) return 1;
   return n * factorial(n-1) ;
}

int main(){
    int n;
    cout << "enter the number" << endl;
    cin >> n;
    cout << factorial(n) << endl;
}