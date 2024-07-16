#include<bits/stdc++.h>
using namespace std;

int sum_of_digits(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;  
        number /= 10;       
    }
    return sum;
}

int main(){
    int number;
    cout << "enter the number" << endl;
    cin >> number;
    cout << "sum: " << sum_of_digits(number) << endl;

}