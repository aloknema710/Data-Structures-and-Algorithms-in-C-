/******************************************************************************

                              Online C++ Compiler.
              Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
void f1(int n,int i){
    if(i == n) return;
    cout<<"name"<<" ";
    f1(n,i+1);
}

void f2(int n,int i){
    if(i > n) return;
    cout<<i<<" ";
    f2(n,i+1);
}

void f2r(int n,int i){
    if(i == 0) return;
    cout<<i<< " ";
    f2r(n,i-1);
}

// backtracking
void bf1(int n,int i){
    if(i == 0) return;
    bf1(n,i-1);
    cout<<i<<" ";
}

void bf2(int n,int i){
    if(i > n) return;
    bf2(n,i+1);
    cout<<i<<" ";
}

int main()
{
    int n;
    cin>>n;
    
    f1(n,0);
    f2(n,1);
    f2r(n,n);
    bf1(n,n);
    bf2(n,1);
    
    return 0;
}