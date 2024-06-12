//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
     int temp1 = -1,temp2 = -1;
   for(int i = 0;i < n;i++){
       if(arr[i] == x) return {arr[i],arr[i]};
       if(arr[i] < x && arr[i] > temp1){
           temp1 = arr[i];
       }
       else if(arr[i] > x){
           temp2 = (temp2 == -1)? arr[i] : ( arr[i] < temp2)? arr[i] : temp2;
       }
   }
   return {temp1,temp2}; 
}