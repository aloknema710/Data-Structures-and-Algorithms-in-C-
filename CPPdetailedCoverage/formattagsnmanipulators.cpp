#include<bits/stdc++.h>
using namespace std;
// setf() and unsetf() formatting flags

int main(){
    cout.fill('*');
    cout.setf(ios::left, ios::adjustfield); // left alignment
    cout.width(10);
    cout<<"TABLE 1"<<endl;

    // we can even convert an int to hex, octal, decimal using setf
    int num = 255;
    cout.setf(ios::hex, ios::basefield); // set hex format
    cout<<"Hexadecimal of 255 : "<<num<<endl;

    // ios::basefield is a mask to reset the previous basefield flags (hex, oct, dec)
    // ios::showpoint flag forces the output to show decimal point and trailing zeros
    // ios::showpos flag forces the output to show + sign for positive numbers
    // ios::fixed flag forces the output to be in fixed point notation



    //Mannipulators and functions
    /*
    cout<<setfill('#'); // manipulator version of fill
    cout<<setw(10);    // manipulator version of width
    cout<<setprecision(4); // manipulator version of precision
    cout<<setiosflags(ios::fixed | ios::showpoint); // manipulator version of setf
    cout<<resetiosflags(ios::fixed | ios::showpoint); // manipulator version of unsetf
    endl;
    */
}