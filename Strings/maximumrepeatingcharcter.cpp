#include<bits/stdc++.h>
using namespace std;
char getmaxoccchar(string str){
    int arr[26]={0};
    for(int i=0;i<str.length();i++){
        if (str[i]>='a'&&str[i]<='z'){
            arr[str[i]-'a']++;   
        }
        else{
            arr[str[i]-'A']++;
        }
    }
    int max=0;
    char maxchar=' ';
    for(int i=0;i<26;i++){
        if (arr[i]>max){
            max=arr[i];
            maxchar=(char)(i+'a'); 
        }
    }
    return maxchar;
}
int main(){
    string str;
    cin >> str;
    cout<<getmaxoccchar(str);
}

/*
#include <iostream>
using namespace std;
char maxOccurringChar(string str) {
   char ans;
   int maxfreq = 0, n = str.length();
   int count[256] = {0};
   for (int i = 0; i < n; i++) {
      count[str[i]]++;
      if (count[str[i]] > maxfreq) {
         maxfreq = count[str[i]];
         ans = str[i];
      }
   }
   return ans;
}
int main() {
   string str = "takeuforward";
   cout << "Maximum occurring character is " << maxOccurringChar(str) << endl;
}
*/