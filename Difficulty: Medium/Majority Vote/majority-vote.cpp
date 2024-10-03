//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& nums) {
    vector<int> ans;
        unordered_map<int, int> mp;
        int n = nums.size();

        // Count the frequency of each element
        for (int num : nums) {
            mp[num]++;
        }

        // Check for elements with frequency > n/3
        for (auto& i : mp) {
            if (i.second > n / 3) {
                ans.push_back(i.first);
            }
        }

        // If no such elements, return {-1}
        if (ans.empty()) return {-1};

        // Sort the result in increasing order
        sort(ans.begin(), ans.end());
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<int> ans = ob.findMajority(nums);
        for (auto &i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends