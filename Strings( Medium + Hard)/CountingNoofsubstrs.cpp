#include<bits/stdc++.h>
using namespace std;

class Solution {
    int atMostKDistinct(string str, int k){
        
    }
public:
    int countNofSubsts(string str, int k){
        return atMostKDistinct(str, k) - atMostKDistinct(str, k - 1);
    }
};

int main(){
    Solution s;
    string str = "pqpqs";
    int k = 2;
    s.countNofSubsts(str,k);
}