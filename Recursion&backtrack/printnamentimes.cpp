
#include<bits/stdc++.h>
using namespace std;

void f(int res,int n){
    if(res>n){
        return;
    }
    cout<<"xyz"<<endl;
    f(res+1,n);

}

int main(){
    int n;
    cin >> n;
    f(1,n);
}

