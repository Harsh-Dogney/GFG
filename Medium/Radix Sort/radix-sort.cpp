//{ Driver Code Starts
//Initial Template for C++

#include  <bits/stdc++.h> 
using namespace std; 
  

// } Driver Code Ends
//User function Template for C++

void radixSort(int arr[], int n) 
{ 
   // code here
   int t = log10(*max_element(arr,arr+n))+1;
for(int i = 0;i < t;i++){
    vector <queue<int>> v(10);
    for(int j = 0;j < n;j++)
        v[int(arr[j]/pow(10,i))%10].push(arr[j]);
    for(int x = 0,j = 0 ;j < 10;j++){
        while(v[j].size()){
            arr[x++] = v[j].front();
            v[j].pop();
        }
    }
}
} 

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
  
        radixSort(arr, n); 
        
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        
        cout<<endl;
    }
    return 0; 
} 
// } Driver Code Ends