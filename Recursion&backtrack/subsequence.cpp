#include<bits/stdc++.h>
using namespace std;
void generatesubsequence(int index,vector<int>ds,int arr[],int n){
    if(index>=n){
        for(auto it : ds){
            cout<<it<<" ";
        }
        cout<<endl;
        return ;
    }
    ds.push_back(arr[index]);
    generatesubsequence(index+1,ds,arr,n);
    ds.pop_back();
    generatesubsequence(index+1,ds,arr,n);
}
int main(){
    int arr[] = {3,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> ds;
    generatesubsequence(0,ds,arr,n);
}