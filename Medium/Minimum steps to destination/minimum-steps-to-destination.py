#User function Template for python3

class Solution:
    def minSteps(self, d):
        # code here
        t, p = 0,0 
        while p < d or (p - d) % 2 != 0:
            t += 1
            p += t
        return t


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        d = int(input())

        ob = Solution()
        print(ob.minSteps(d))

# } Driver Code Ends