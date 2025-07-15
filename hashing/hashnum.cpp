#include<bits/stdc++.h>
using namespace std;

int main(){
    // insertion of array elements
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
    // precompute
    int hash[13]={0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    
    

    // Take the numbers and tell how many times does they appear.
    int q;
    cin>>q;
    while (q--)
    {
        int num;
        cin>>num;

        cout<<hash[num]<<endl;
    }
     
}