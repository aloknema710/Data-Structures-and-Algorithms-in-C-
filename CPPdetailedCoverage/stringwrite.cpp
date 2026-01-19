#include<bits/stdc++.h>
using namespace std;

int main(){
    const char * string1 = "c++ ";
    const char * string2 = "Programming";  //use with const
    int m = strlen(string1);
    int n = strlen(string2);

    for (int i = 0; i < n; i++){
        cout.write(string2,i);
        cout<<"\n";
    }
    
    for (int j = n; j > 0; j--){
        cout.write(string2,j);
        cout<<"\n";
    }
    
    cout.write(string1,m).write(string2,n);
    cout.write(string1,10);  // printed complete 1 and 2 beacuse string literals are stored consecutively in read-only memory.
}
// 4cont..