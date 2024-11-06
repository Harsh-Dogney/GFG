//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
//  Class Solution to contain the method for solving the problem.
class Solution {
  public:
    vector<int> findSplit(vector<int>& arr) {
        int i = 0;
        int j = arr.size()-1;
        
        int left = arr[i];
        int right = arr[j];
        
        while (i < j){
            if (left < right){
                i++;
                left += arr[i];
            }
            else if (left > right){
                j--;
                right += arr[j];
            }
            else{
                int curr = 0;
                for (int s = i+1; s < j; s++){
                    curr+=arr[s];
                }
                if (curr == left) return {i,j};
                i++;
                j--;
                left += arr[i];
                right += arr[j];
            }
            
        }
        
        return {-1,-1};
    }
};


//{ Driver Code Starts.

int main() {
    int test_cases;
    cin >> test_cases;
    cin.ignore();
    while (test_cases--) {
        string input;
        vector<int> arr;

        // Read the array from input line
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        // Solution instance to invoke the function
        Solution ob;
        vector<int> result = ob.findSplit(arr);

        // Output result
        if (result[0] == -1 && result[1] == -1) {
            cout << "false" << endl;
        } else {
            cout << "true" << endl;
        }
    }
    return 0;
}

// } Driver Code Ends