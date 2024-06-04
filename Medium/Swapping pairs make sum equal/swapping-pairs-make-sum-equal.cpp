//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int findSwapValues(int a[], int n, int b[], int m) {
        // Your code goes here
        unordered_map<int,int>m1;
        unordered_map<int,int>m2;
        int sum1=0;
        int sum2=0;
        for(int i =0;i<n;i++){
            m1[a[i]]++;
            sum1+=a[i];
        }
        for(int i =0;i<m;i++){
            m2[b[i]]++;
            sum2+=b[i];
        }
        
        
        for(auto ele:m1){
            int firstSum=sum1-ele.first;
            int secondSum=sum2+ele.first;
            if(firstSum>secondSum) continue;
            int diff=secondSum-firstSum;
            if(diff%2) continue;
            int req=diff/2;
            
            if(m2.find(req)!=m2.end()) return 1;
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n];
        int b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        Solution ob;
        cout << ob.findSwapValues(a, n, b, m);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends