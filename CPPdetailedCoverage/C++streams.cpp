// stream is sequence of bytes., source stram that provide data to program is input stram and vice versa in o/p stream.
#include<bits/stdc++.h>
using namespace std;

int main(){/*
    int code;
    cin >> code;  // 4258N N will be ignored by operator.
    cout<<code;*/

    int count = 0;
    char c;

    cout<<"Input Text\n";

    cin.get(c); // first char c input after declaration
    // while cin.getline() reads an entire line of text(no new line) and stores only in array of chars/strings

    while (c!= '\n'){
        cout.put(c); // output char and cin.get() takes new one and overwrites the old one
        count++;    
        cin.get(c); // reads a single character from input buffer includes whitespaces tabs and newlines and stores in char var.
        // or char ch = cin.get(); alternate for above
    }
    cout<<"\nNumber of Counts char"<<count<<endl;
}