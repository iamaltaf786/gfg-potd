//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		int top = 0,bottom = n-1,left = 0,right = m-1;
 		int count=0;
 		
 		while(top <= bottom && left <= right)
 		{
            // traversing from left to right at TOP.Here TOP row is fixed but column is 
            // changing from left to right
 		    for(int i=left; i<=right; i++)
 		    {
 		        count++;
 		        if(count == k) return a[top][i];
 		    }
 		    top++; // after traversing this row we move to next row. So TOP++
 		    
            // traversing from top to bottom at RIGHT.Here RIGHT row is fixed but row is 
            // changing from top to bottom
 		    for(int i=top; i<=bottom; i++)
 		    {
 		        count++;
 		        if(count == k) return a[i][right];
 		    }
 		    right--; // after traversing this colomn we move to  back column. So RIGHT--
 		    
 		    for(int i=right; i>=left; i--)
 		    {
 		        count++;
 		        if(count == k) return a[bottom][i];
 		    }
 		    bottom--;
 		    
 		    for(int i=bottom; i>=top; i--)
 		    {
 		        count++;
 		        if(count == k) return a[i][left];
 		    }
 		    left++;
 		    
 		}
 		
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends