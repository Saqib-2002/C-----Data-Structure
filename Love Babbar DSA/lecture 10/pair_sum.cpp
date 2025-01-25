//Code360 - Pair Sum. Given array of size N and an integer S. Return the list of all pairs of elements such that
// each sum of elements of each pair is equal to S.
// lvl - easy

#include<iostream>
#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>> ans;
   
   for (int i= 0; i < arr.size(); i++) {
      for (int j = i+1;j < arr.size(); j++) {
         if (arr[i] + arr[j] == s) {
            vector<int> temp;
            temp.push_back(min(arr[i], arr[j]));
            temp.push_back(max(arr[i], arr[j]));
            ans.push_back(temp);
         }
      }
   sort(ans.begin(), ans.end());
   }
   return ans;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int s = 5;

    vector<vector<int>> result = pairSum(arr, s);
    cout << "Pairs with sum " << s << " are:" << endl;
    for (auto &pair : result) {
        cout << "(" << pair[0] << ", " << pair[1] << ")" << endl;
    }
    return 0;
}