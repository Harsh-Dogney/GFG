//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    private:
    void solve(int ind,int n,int target,vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans)
    {
        //base case
        if(target==0)
        {
            ans.push_back(temp);
            return ;
        }
        //we will make everyone as first
        for(int i=ind;i<n;++i)
        {
            if(i>ind and nums[i]==nums[i-1]) continue;
            //important
            if(nums[i]>target) break; // no need to make further recursion call
            
            temp.push_back(nums[i]);
            solve(i+1,n,target-nums[i],nums,temp,ans);
            temp.pop_back();
        }
    }
public:
    vector<vector<int>> CombinationSum2(vector<int> arr,int n,int k)
    {
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        vector<int>temp;
        //{ind,n,target,arr,temp,ans}
        solve(0,n,k,arr,temp,ans);
        return ans;
    }
    // t.c -> o(2^n*k)
    // s.c-> o(k*x)

};

//{ Driver Code Starts.


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        auto obj=ob.CombinationSum2(arr,n,k);
        for(int i=0;i<obj.size();i++)
        {
            for(int j=0;j<obj[i].size();j++)
            {
                cout<<obj[i][j]<<" ";
            }
            cout<<"\n";
        }
        if(obj.size()==0) cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends