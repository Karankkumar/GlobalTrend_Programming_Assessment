// Write a function to find the maximum difference between any two elements in an array.The function should return the maximum difference between any two elements in the array.
// provide me the optimal solution in c++

#include <bits/stdc++.h>
using namespace std;

int maxDifference(vector<int>& arr) {
    int min_element = arr[0];
    int max_element = arr[0];

    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] < min_element) {
            min_element = arr[i];
        }
        if (arr[i] > max_element) {
            max_element = arr[i];
        }
    }

    return max_element - min_element;
}

int main() {
    vector<int> arr = {1, 2, 90, 10, 110};
    cout << "maximum difference: " << maxDifference(arr) << endl;
    return 0;
}
