//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        int k = 1e6+5;
        int temp[k] = {0}; // taking a temp array , initializing its all elements as 0.
        
        //traversing the array and incrementing that element in temp array.
        for(int i=0; i<n; i++)
        {
            if(arr[i] > 0)
            {
                temp[arr[i]]++;
            }
        }
        
        // now we have an array in which index of greater than 0 element is 1, and rest is zero.
        // arr[6] = {2, 5, -10, 6, 4, 1}
        // temp[k] = {0, 1, 1, 0, 1, 0, 1, 0, 0, 0, ....rest alls are 0}
        // traversing from 1 because 0 is not a positive element.
        for(int i=1; i<k; i++)
        {
            if(temp[i] == 0)
            {
                return i;
            }
        }
    } 
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends