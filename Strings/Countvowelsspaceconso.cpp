#include<bits/stdc++.h>
using namespace std;
void countall(string str){
    int vowels = 0, conso = 0, spaces = 0;
    for(int i = 0; i < str.length(); i++){
        str[i] = tolower(str[i]);
    }
    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i'|| str[i] == 'o' || str[i] == 'u'){
            vowels++;
        }
        else if(str[i] == ' '){
            spaces++;
            }
        else{
            conso++;
        }
    }
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << conso << endl;
    cout << "Spaces: " << spaces << endl;
}
int main(){
    string str;
    getline(cin,str);
    countall(str);
    return 0;
}