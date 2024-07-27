//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(int n, int arr[]) {
        vector<int> v;
    
    // Loop through each element of the array except the last one
    for (int i = 0; i < n - 1; i++)
    {
        // Initialize the next index
        int j = i + 1;
        
        // Loop through the elements to the right of arr[i]
        for (; j < n; j++)
        {
            // If any element to the right is greater than arr[i]
            if (arr[i] < arr[j])
                break;  // Stop the inner loop
        }
        
        // If no element to the right is greater than arr[i]
        if (j == n)
            v.push_back(arr[i]);  // Add arr[i] to the list of leaders
    }
    
    // The last element is always a leader
    v.push_back(arr[n - 1]);
    
    return v;
    }
};

//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t; // testcases
    while (t--) {
        long long n;
        cin >> n; // total size of array

        int arr[n];

        // inserting elements in the array
        for (long long i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        // calling leaders() function
        vector<int> v = obj.leaders(n, arr);

        // printing elements of the vector
        for (auto it = v.begin(); it != v.end(); it++) {
            cout << *it << " ";
        }

        cout << endl;
    }
}

// } Driver Code Ends