// Write a function to rotate an array to the right by k steps.The function should modify the array in place to achieve the rotation.
#include <bits/stdc++.h>
using namespace std;

void rotateright(vector<int> &nums, int n, int steps)
{
    vector<int> temp(steps);
    for (int i = n - steps; i < n; i++)
    {
        temp[i - (n - steps)] = nums[i];
    }

    for (int i = n - steps - 1; i >= 0; i--)
    {
        nums[i + steps] = nums[i];
    }

    for (int i = 0; i < steps; i++)
    {
        nums[i] = temp[i];
    }
}

int main()
{
    int n;
    cout << "enter no. of elements" << endl;
    cin >> n;
    cout << "enter the elements" << endl;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int k;
    cout << "enter value of k" << endl;
    cin >> k;

    cout << "before rotate" << endl;
    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;

    k = k % n;
    rotateright(v,n,k);

    cout << "after rotate" << endl;
    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;
}