#include <bits/stdc++.h>
using namespace std;

int nCr(int n, int r) {
    long long res = 1;
    // calculating nCr:
    for (int i = 0; i < r; i++) { 
        res = res * (n - i);               // procedure to calculate values
        res = res / (i + 1);
    }
    return res;
}

int pascalTriangle(int r, int c) {
    int element = nCr(r - 1, c - 1);
    return element;
}

void printrow(int r){
    long long ans = 1;
    cout<<ans<<" ";
    for(int i = 1; i < r; i++){
        ans = ans*(r - i);
        ans = ans/i;
        cout << ans << " ";
    }
    cout << endl;
}

int main()
{
    int r = 5; // row number
    int c = 3; // col number
    int element = pascalTriangle(r, c);
    cout << "The element at position (r,c) is: "<< element <<"n";
    printrow(r);
    return 0;
}