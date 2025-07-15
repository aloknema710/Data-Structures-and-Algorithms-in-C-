#include<bits/stdc++.h>
using namespace std;
string removeoccur(string str,string part){
    while (str.length()!=0 && str.find(part)<str.length()){
        str.erase(str.find(part),part.length());
    }
    return str;
}
int main(){
    string str,part;
    cout<<"Enter the string: ";
    cin >> str;
    cout<<"Enter the part to remove: ";
    cin >> part;    
    cout<<"String after removing the part: "<<removeoccur(str,part)<<endl;
    return 0;
}