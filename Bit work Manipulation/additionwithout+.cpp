#include<bits/stdc++.h>
using namespace std;

/*
Add digits without caring about carry
Handle the carry separately
*/
int sum(int a, int b){      // 0101, 0110 -> 1011
    int carry = 0;
    while (b!=0){
        carry = (a & b)<<1;     // 1000,0000
        a = a ^ b;              // 0011,1011
        b = carry;              // 1000,0000
    }
    
    return a;          // 1011
}

int difference(int a, int b){   // 0101,0110 -> 0001
    int carry = 0;
    while (b!=0){
        carry = (~a) & b;   //0010,0100,1000
        a = a^b;            //0011,0111,1111
        b = carry<<1;       //0100,1000,0000
    }
    return a;

}

int multiplication(int b,int a){  //2->0010, 3->0011    => prod = 0110
    if(a==1) return b;
    if(b==1) return a;
    bool sign = true;
    if(a >=0 && b < 0) sign = false;
    if(a < 0 && b > 0) sign = false;
    a = abs(a);
    b = abs(b);

    // int product = 1;
    int product = 0;
    // for (int i = 0; i < a; i++) {
    //     product += b;
    // }

    while (a > 0) {
        if (a & 1) {
            product += b;
        }
        b <<= 1;
        a >>= 1;
    }

    return sign ? product : -product;
}

int division(int a, int b){     // a = 22, b = 3
    if(a==b) return 1;
    bool sign = true;
    if(a >=0 && b < 0) sign = false;
    if(a < 0 && b > 0) sign = false;
    int dividend = abs(a);
    int divisor = abs(b);
    int quotient = 0;
    while(dividend >= divisor){    // 22 >= 3    .... 4 >= 3
        int cnt = 0;
        while (dividend >= (divisor<<(cnt+1))){    // 22 >= (3<<1) ... 4 >= (3<<1)
            cnt++;   // 0+1, ...  0
        }
        quotient += 1<<cnt;    // 0 + (1<<1)  i.e 2,  ... 2 + (1<<0)  i.e 3 
        dividend -= (divisor<<cnt);        // 10 - (3 << 1) = 4, ... 4 - (3 << 0) = 1  loop outer ends.
    }
    if(quotient == (1 << 31) && sign) return INT_MAX;

    if(quotient == (1 << 31) && !sign) return INT_MIN;

    return sign ? quotient : -quotient;
}

int divide(int dividend, int divisor) {
        long qout = 0;
        bool sign = true;
        if(dividend == divisor) return 1;
        if(dividend >= 0 && divisor <= 0) sign = false;
        if(dividend <= 0 && divisor >= 0) sign = false;
        long long dvd = llabs((long long)dividend);
        long long dvs = llabs((long long)divisor);
        while(dvd >= dvs){
            long cnt = 0;
            while(dvd >= (dvs << (cnt+1))) cnt++;
            qout += 1<<cnt;
            dvd -= dvs<<cnt;
        }
        if(qout == (1 << 31) && sign) return INT_MAX;

        if(qout == (1 << 31) && !sign) return INT_MIN;
        return sign ? qout : -qout;
    }

int main(){
    int a = 6, b = 5;
    cout<<sum(a,b)<<endl;
    cout<<difference(b,a)<<endl;
    cout<<multiplication(b,a)<<endl;
    cout<<division(22,3);
}