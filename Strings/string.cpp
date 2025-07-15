#include<bits/stdc++.h>
using namespace std;
int getlength(char name[]){
    int count = 0;
    while(name[count] != '\0') { //'/0' represents end of string
        count++;
        }
        return count;
}
int main(){
    char c = 'a';
    // 1 D character array is string.
    char str[] = "Hello, World!";
    cout << str << endl;

    char name[10];
    cin>>name;         // stop execution when you put tab space enter
    cout<<name<<endl; // will only return my name till spacebar 

    // 2 D character array is matrix.
    char matrix[3][3] = {
        {'a', 'b', 'c'},
        {'d', 'e', 'f'},
        {'g', 'h', 'i'},
        };
        // 3 D character array is 3D matrix.
        char threeDMatrix[3][3][3] = {
            {{'a', 'b', 'c'}, {'d', 'e', 'f'},
            {'g', 'h', 'i'}},
            {{'j', 'k', 'l'}, {'m', 'n', 'o'},
            {'p', 'q', 'r'}},};
            return 0;
            
}