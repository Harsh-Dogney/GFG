//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    
    void swapone(int size,vector<int> &arr){
        for(int i =0;i<size;i++){
            if(arr[i]!=i+1){
            for(int j=i+1;j<size;j++){
                if(arr[j]==i+1){
                    swap(arr[j],arr[i]);
                    return;
                }
            }   
            }
        }
    }
    
      
    bool checkSorted(vector<int> &arr) {
    int n = arr.size();
    int wrng=0;
    for(int i = 0;i<n;i++){
        if(arr[i]!=i+1) wrng++;
    }   
        if(wrng==1 ||wrng==2||wrng>4) return false;
        
        if(wrng==0 ||wrng==3) return true;
        
        swapone(n,arr);
        swapone(n,arr);
    for(int i = 0;i<n;i++){
        if(arr[i]!=i+1) return false;
    }  
    
    return true ;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        bool ans = ob.checkSorted(arr);
        if (ans)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
}

// } Driver Code Ends