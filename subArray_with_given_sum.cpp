//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        vector<int> ans;
        
        if(s == 0)
        {
            ans.push_back(-1);
            return ans;
        }
        
        int i=0, j=0;
        int st = -1, en = -1;
        long long int sum = 0;
        
        while( j < n && sum + arr[j] <= s)
        {
            sum+=arr[j];
            j++;
        }
        
        if(sum == s)
        {
            ans.push_back(i+1);
            ans.push_back(j);
            return ans;
        }
        
        while(j < n)
        {
            sum+=arr[j];
            
            while(sum > s)
            {
                sum -= arr[i];
                i++;
            }
            
            if(sum == s)
            {
                st = i+1;
                en = j+1;
                break;
            }
            
            j++;
        }
        
        if(st == -1 && en == -1)
        {
            ans.push_back(st);
        }
        else{
            ans.push_back(st);
            ans.push_back(en);
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
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends