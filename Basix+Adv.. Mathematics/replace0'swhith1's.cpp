// very very important program to replace 0's with 1's in a number
// This program replaces all occurrences of 0 in a number with 1.
#include<bits/stdc++.h>
using namespace std;
int replace(int n){
    if(n==0) return 0;
    int ans = 0, temp = 1;
    while (n!=0){
        int r = n%10;
        if (r == 0){
            r = 1;
        }

        ans = ans + temp*r;    // unit will be ans term and temp*r is going to calculate tens and further place values.
        
        temp = temp*10;       // V.V.V.imp for correct calculation of tens hundreds thousand terms 
        n = n/10;             //
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<replace(n);
}
