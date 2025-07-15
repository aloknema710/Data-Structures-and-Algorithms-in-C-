// square of a number ending with itself. (76^2 ends with 5776) and (25^2 ends with 625).
// So, we need to find the number that ends with itself when squared.
// The number that ends with itself when squared is 1, 5, and 6.
// So, the answer is 3.

#include<bits/stdc++.h>
using namespace std;
bool isautomorphic(int n){
    long sq = (long)n*n;             // typecasting of int n into long. 
    while (n > 0){
        if (n % 10 == sq % 10){     // check last digit of both the numbers one by one if sq contains n it will return true. 
            return true;
        }
        n /= 10;                   //  both are %modulo by 10 until n terminates.
        sq /= 10;                   // since,sq is larger than n while() will run till n > 0.
    }
    return false;
}
int main(){
    int n ;
    cin>>n;
    if(isautomorphic(n)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
        }
    return 0;
}