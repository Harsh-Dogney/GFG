//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

//Position this line where user code will be pasted.
class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        vector<int>add;
        int n =arr1.size();
        int l =0;
        int ans =0;
        for(int i =0;i<n;i++){
            add.push_back(arr1[i]);
            
        }
        for(int i =0;i<n;i++){
           add.push_back(arr2[i]);
        }
        sort(add.begin(),add.end());
        
        for(int i =0;i<2*n;i++){
           int h = (2*n -1);
           int mid = (l+h)/2;
           int ans = add[mid] + add[mid+1];
           return ans; 
        }
        
        return 1; 
    }
};

//{ Driver Code Starts.
//Back-end complete function template in C++

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        Solution ob;
        int res = ob.SumofMiddleElements(arr, brr);
        cout << res << endl;
    }
}
// } Driver Code Ends