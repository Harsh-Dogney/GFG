//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {

    // Function to find the trapped water between the blocks.
  public:
    long long trappingWater(vector<int> &arr) {
    long long size=arr.size();
         vector<int>prefixsum(size,0);
         prefixsum[0]=0;
         vector<int>suffixsum(size,0);
         suffixsum[size-1]=0;
         for(int i=1;i<size;i++){
           prefixsum[i]=max(prefixsum[i-1],arr[i-1]);
         }
          for(int i=size-2;i>=0;i--){
           suffixsum[i]=max(suffixsum[i+1],arr[i+1]);
         }
        long long maxi=INT_MIN;
       long long sum=0;
         for(int i=0;i<size;i++){
           maxi=min(prefixsum[i],suffixsum[i])-arr[i];
            if(maxi>0){
             sum+=maxi;
            }
         }
         return sum;    // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        long long res = ob.trappingWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends