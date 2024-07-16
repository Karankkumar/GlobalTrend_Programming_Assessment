// given a string, find the length of the longest substring without repeating characters.The function should return an integer representing the length of the longest substring without repeating characters.


#include<bits/stdc++.h>
using namespace std;

int length_of_longest_substring(string s){
    int n = s.length();
    int maxlen = 0;
    int start = 0;
    int end = 0;
    unordered_map<char,int> mpp;
    while(end<n){
      if(mpp.find(s[end]) != mpp.end()){
        while(mpp.find(s[end]) != mpp.end()){
          mpp.erase(s[start]);
          start++;
        }
      }
      
      mpp[s[end]]++;
      maxlen = max(maxlen,end-start+1);
      end++;
      
    }
    
    return maxlen;
}

// abcvbd

int main(){
  string s;
  cout << "enter the input " << endl;
  cin >> s;
  cout << length_of_longest_substring(s) << endl;
}