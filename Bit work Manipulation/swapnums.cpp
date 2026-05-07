#include<bits/stdc++.h>
using namespace std;

// xor operation of 0 and 1, 1 and 0 will always be 1(only this case it is 0 with 1,1 or 0,0 it'll always be 0).
void swap(int &a, int &b){
    a = a^b;
    b = a^b;  // i.e b here = a^b^b = a
    a = a^b;
}

int main(){
    int a;
    int b;
    swap(a,b);
}