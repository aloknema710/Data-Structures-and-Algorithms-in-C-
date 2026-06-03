#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='M') {
                if(i-1>=0 && s[i-1]=='C') ans-=2*100;
                ans+=1000;
            }
            else if(s[i]=='D') {
                if(i-1>=0 && s[i-1]=='C') ans-=2*100;
                ans+=500;
            }
            else if(s[i]=='C') {
                if(i-1>=0 && s[i-1]=='X') ans-=2*10;
                ans+=100;
            }
            else if(s[i]=='L') {
                if(i-1>=0 && s[i-1]=='X') ans-=2*10; 
                ans+=50;
            }
            else if(s[i]=='X') {
                if(i-1>=0 && s[i-1]=='I') ans-=2; 
                ans+=10;
            }
            else if(s[i]=='V') {
                if(i-1>=0 && s[i-1]=='I') ans-=2; 
                ans+=5;
            }
            else if(s[i]=='I') ans++;
        }
        return ans;
    }
};

/*
class Solution {
    int value(char it){
        if(it == 'I') return 1;
        else if(it == 'V') return 5;
        else if(it == 'X') return 10;
        else if(it == 'L') return 50;
        else if(it == 'C') return 100;
        else if(it == 'D') return 500;
        else return 1000;
    }
public:
    int romanToInt(string s) {
        int res = 0;
        for(int i = 0; i < s.size(); i++) {
            if(i+1 < s.size() && value(s[i]) < value(s[i+1])) {
                res -= value(s[i]);
            } else{
                res += value(s[i]);
            }
        }
        return res;
    }
};
*/