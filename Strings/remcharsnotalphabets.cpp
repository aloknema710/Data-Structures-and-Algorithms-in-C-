#include<bits/stdc++.h>
using namespace std;
string solve(string str, int n){
    string ans = "";
    for(int i = 0; i < n; i++){
        if (str[i] >= 'a' && str[i] <= 'z' ||str[i] >= 'a' && str[i] <= 'z'){
            ans += str[i];
        }
    }
    return ans;
}
int main() {
// Input string
    string str = "take12% *&u ^$#forward";
    int n = str.length();
  
    cout << "Resultant string:" << "\n";
    cout << solve(str, n) << "\n";
    return 0;
  }