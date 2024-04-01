//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        
        string lower,upper;
        string ans;
        for(int i=0; i<n; i++)
        {
            if(str[i]>='a' && str[i]<='z')
            {
                lower+=str[i];
            }
            else
            {
                upper+=str[i];
            }
        }
        sort(lower.begin(),lower.end());
        sort(upper.begin(),upper.end());
        int i=0,j=0,k=0;
        while(i<n ||j<lower.size() || k<upper.size())
        {
            if( str[i]>='a' && str[i]<='z')
            {
                ans+=lower[j];
                j++;
                i++;
                
                }
            
            else if(k<upper.size())
            {
                ans+=upper[k];
                k++;
                i++;
            }
            
        }
    return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends