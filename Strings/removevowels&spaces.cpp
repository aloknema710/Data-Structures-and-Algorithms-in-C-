#include<bits/stdc++.h>
using namespace std;
string RemoveVowels(string str){
    string res = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i]!= 'u'){
            res += str[i];
        }
    }
    return res;
}
string RemoveSpaces(string str){
    string res = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            res += str[i];
        }
    }
    return res;
}
int main()
{
  string str = "take u forward";
  cout <<"String after removing the vowels \n" <<RemoveVowels(str) << endl;
  cout <<"String after removing the spaces \n" <<RemoveSpaces(str) << endl;
  return 0;
}