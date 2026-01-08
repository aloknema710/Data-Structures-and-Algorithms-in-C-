#include<bits/stdc++.h>
using namespace std;
void print10(int n){
    for (int i = 0; i < 2*n; i++){
        int stars = i;
        // after i > n, we are going to reverse pattern decrementing the terminator
        if(i>n) stars=2*n - i;
        for (int j = 0; j < stars; j++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
    
}
int main(){
    int n = 5;
    // for (int i = 1; i <= n; i++){
    //     for (int j = 0; j < n-i; j++){
    //         cout<<' ';
    //     }
    //     for (int k = 0; k < 2*i-1; k++){
    //         /* code */
    //         cout<<'x';
    //     }
        
    //     for (int k = 0; k < n-i; k++){
    //         cout<<' ';
    //     }
    //   cout<<endl;   
    // }
    


    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int k = 0; k < 2*n-(2*i+1); k++)   // when i increases k decreases, inversely proportional
    //     {
    //         cout<<"x";
    //     }
        
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }
    


    print10(n);
}