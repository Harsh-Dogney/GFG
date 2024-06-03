//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string binaryNextNumber(string s) {
        // code here.
         s='0'+s;
        int n=s.size();
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='1')
            {
                s[i]='0';
            }
            else{
                s[i]='1';
                break;
            }
        }
        reverse(s.begin(), s.end());
        int i=n-1;
        while(s[i]!='1')
        {
            s.pop_back();
            i--;
        }
        reverse(s.begin(), s.end());
        return s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.binaryNextNumber(s);
        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends