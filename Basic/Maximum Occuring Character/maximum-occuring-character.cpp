//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
     
        if(str.size()==1)
         {  char k=str[0];
             return k;}
        sort(str.begin(),str.end());
        int c,max=-1;
        char p;
        for(int i=0;i<str.size();i++)
        {
            c=0;
            for(int j=i+1;j<str.size();j++)
            {
                if(str[i]==str[j])
                {
                     c++;
                }
            }
            if(c>max){
              p=str[i];
              max=c;
            }
        }
        return p;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends