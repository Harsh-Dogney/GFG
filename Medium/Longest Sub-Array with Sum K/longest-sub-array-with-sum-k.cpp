//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        
        unordered_map<int,int>mp;
        int sum=0;
        int ans=0;
        for(int i=0;i<N;i++){
            sum+=A[i];
            if(mp.find(sum-K)!=mp.end()){
                ans=max(ans,i-mp[sum-K]);
                // cout<<mp[temp-K]<<" "<<i<<endl;
            }
            if(mp.find(sum)==mp.end()){
                mp[sum]=i;
            }
            if(sum==K)ans=max(ans,i+1);
        }
        return ans;
        
        
        
        
        
        // map<long,long,int>preSumMap;
        // long long sum =A[0];
        // int maxi = 0;
        // for(int i = 0;i<N;i++){
        //     sum += A[i];
        //     if(sum == K){
        //         maxi = max(maxi,i+1);
        //     }
        //     long long rem = sum - K;
        //     if( preSumMap.find(rem) != preSumMap.end()){
        //         int len = i - preSumMap[rem];
        //         maxi  = max(maxi,len);
        //     }
        //     if( preSumMap.find(sum) == preSumMap.end()){
        //         preSumMap[sum]=i;
        //     }
        // }
        // return maxi;
        
        
        // long long sum=A[0];
        // int l=0,r=0;
        // int maxi=0;
        // while(r<N){
        //     while(l<=r && sum>K){
        //         sum -=A[l];
        //         l++;
        //     }
        //     if(sum == K){
        //         maxi=max(maxi,r-l+1);
        //     }
        //     r++;
        //     if(r<N){
        //         sum +=A[r];
        //     }
        // }
        // return maxi;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends