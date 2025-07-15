#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    //computing
    int hash[26]={0};                   // only for small letters
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]-'a']++;                //it will increment the 0 value stored in hash array at alphabet's location
    }
    
/* In this code we have used   -'a' everywhere because in ascii values value of lowercase a is 97 and by subtracting
    a from each string value we can identify the original number associated with that alphabet  */

    int q;
    cin>>q;
    while (q--)
    {
        char c;
        cin>>c;

        cout<<hash[c-'a']<<endl;
    }
    
}