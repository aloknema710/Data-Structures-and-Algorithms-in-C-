#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string decodeString(string s) 
    {
        stack<int> Loop;
        stack<string> String;
        string Result = "", Data = "";
        int Number = 0;

        for(int i = 0; i < s.length(); i++)
        {
            if(isdigit(s[i]))
            {
                Number = (Number * 10) + (s[i] - '0');
            }
            else if(s[i] == '[')
            {
                String.push(Result);
                Result = "";
                Loop.push(Number);
                Number = 0;
            }
            else if(s[i] == ']')
            {
                Data = Result;
                Result = String.top();

                for(int j = 0; j < Loop.top(); j++)
                {
                    Result += Data;
                }

                String.pop();
                Loop.pop();
            }
            else
            {
                Result += s[i];
            }
        }

        return Result;
    }
};

int main(){
    string s1 = "3[a2[c]]";
    Solution s;
    cout<<s.decodeString(s1);
}