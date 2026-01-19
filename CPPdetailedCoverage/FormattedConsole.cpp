#include<bits/stdc++.h>
using namespace std;

int main(){
    // ios format functions.
    //cout.width(5);   // cout.width(5) sets the minimum field width for the next output only.
    //cout<<5432<<12<<546<<"\n"; //width(5) applies only to 543, It does not affect 12 or 546

    cout << 12.3456789 << "\n";  // dafult precision is upto 6 significant values

    cout.precision(3);  // Precision = total number of significant digits, not digits after decimal.
    cout<<sqrt(2)<<endl;;
    cout<<3.14159<<"\n";
    cout<<3456658.14159<<"\n"; //3.46e+006

    /*
    Whenever the number has more significant digits than the current precision, C++ rounds the value.
    This applies even without manipulators (fixed, scientific).
    */

    cout.precision(2);
    cout<<0.0199<<endl;  // 0.02 has 2 significant digits after 2 internally it has 1 zero



    // filling and padding => Filling = the character used for padding
    // Default fill character = space ' '
    cout.fill('*');
    cout.width(10);
    cout<<5250<<endl;

    cout<<"___------_____"<<endl;

    cout.fill('<');
    cout.precision(3); // its gonna affect only floating point outputs
    for (int i = 1; i <= 6; i++)
    {
        cout.width(5);
        cout<<i;
        cout.width(10);
        cout<<1.0/float(i)<<endl;
        if(i==3) cout.fill('>');
        cout<<endl;
    }
    
    float pi = 22.0/7.0;
    cout<<"Value of pi : "<<pi<<endl;
    cout<<"Value of pi (fixed) : "<<fixed<<pi<<endl; // fixed manipulator
    cout<<"Value of pi (scientific) : "<<scientific<<pi<<endl; // scientific manipulator
    cout<<"Value of pi (default) : "<<defaultfloat<<pi<<endl; // defaultfloat manipulator

    for (int i = 0; i < 10; i++)
    {
        cout.width(i+1);
        cout.precision(i);
        cout<<pi<<"\n";
    }
    
    
}