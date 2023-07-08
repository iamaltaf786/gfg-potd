#include<bits/stdc++.h>
using namespace std;

bool tripletWithZeroSum(int arr[], int n)
{
    // sort the loop sothat if sum > 0 means reduce the sum so k-- do this and if 
    // sum < 0 means increase the sum so j++ do this.
    sort(arr, arr+n);

    // traversing the arr , taking 1st number using for loop.
    for(int i=0; i<n; i++)
    {
        // using while loop to take 2nd and 3rd number.
        int j=i+1, k=n-1;

        while(j < k)
        {
            // if sum == 0 , return true.
            if(arr[i] + arr[j] + arr[k] == 0)
                return 1;
            // if sum > 0 means reduce the sum so k-- do this
            else if(arr[i] + arr[j] + arr[k] > 0)
                k--;
            // sum < 0 means increase the sum so j++ do this.
            else{
                j++;
            }
        }
    }

    return 0;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++) cin>>arr[i];

    cout << tripletWithZeroSum(arr, n) <<endl;

    return 0;
}