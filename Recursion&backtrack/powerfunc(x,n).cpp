#include<bits/stdc++.h>
using namespace std;

double pow(double x, int n){
    if(n==0) return 1;
    if(n<0) return 1/pow(x,-n);
    if(n%2==0) return pow(x*x,n/2);
    else return x*pow(x*x,(n-1)/2);
}

int main(){
    int x,n;
    cin>>x>>n;
    cout<<pow(x,n);
}


/*
class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;
        if(N==0) return 1;
        if(N<0) return 1/pow(x,-N);
        double res = 1;
        while(N > 0){
            if(N % 2 != 0){
                res *= x;
            } 
            x = x * x;    // normal execution for even powers
            N /= 2;
        }
        return res;
    }
};
*/