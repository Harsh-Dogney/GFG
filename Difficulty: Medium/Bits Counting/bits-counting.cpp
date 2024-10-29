//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> countBits(int n) {
     vector<int> ans(n+1, 0);
    for(int i=1; i<=n; i++){
        ans[i] = ans[i/2] +  i%2;
    }
    return ans;    // code here
    }
};

//{ Driver Code Starts.

int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {

        int n;
        cin >> n;
        vector<int> ans = sol.countBits(n);
        for (auto x : ans)
            cout << x << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends