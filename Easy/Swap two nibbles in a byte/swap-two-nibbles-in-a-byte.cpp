//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int swapNibbles(int n) {
        // code here\
         int right=n>>4;  
          int right=n>>4;  
        int left=n<<4;
        int m=255;
        
        //so to reduce the numbet to 4 bit we will do its and operation with 11111111
        right=right&m;
        left=left&m;
        
        //Then add by swaping the right and the left portion
        return right+left;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.swapNibbles(n) << endl;
    }
    return 0;
}
// } Driver Code Ends