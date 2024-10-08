//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find equilibrium point in the array.
    // arr: input array
    int equilibriumPoint(vector<long long> &a) {
    int n = a.size();
    if(n==1 || n==2) {return a[0];}
    
     // Your code here
        int sum=0;
       int leftSum=0;
       for(int i=0;i<n;i++)
         sum+=a[i];
         
        for(int i=0;i<n;i++)
        {
            sum-=a[i];
            
            if(leftSum==sum)
               return i+1;
               
            leftSum+=a[i];   
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<long long> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.equilibriumPoint(arr) << endl;
    }
}
// } Driver Code Ends