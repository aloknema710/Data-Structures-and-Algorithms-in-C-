#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n]; //     ---  > this array is used to take numbers on which op.. is going to be performed.
    for(int i = 0; i < n; i++){
    cin >> arr[i];
    }

    map<int,int>mpp;                //to know no. of char. in string you should use map<char,int>mpp.
    for (int i = 0; i < n; i++)  //
    {                            // you can also forward it in the above for loop                   
        mpp[arr[i]]++;           //
    }                            //   
    
    for (auto it : mpp)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
    
    
    int q;
    cin>>q;
    while (q--)
    {
        /* code */
        int num;
        cin>>num;
        cout<<mpp[num]<<endl;
    }
    
}