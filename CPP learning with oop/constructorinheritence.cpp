#include<bits/stdc++.h>
using namespace std;

class product
{
private:
    int a;
public:
    product(int i){
        a = i;
        cout<<"a intialized"<<endl;
    };
    void show(){
        cout<<"Value of a : "<<a<<endl;
    };
    ~product(){
        cout<<"Product Destructor called"<<endl;
    };
};

class item
{
private:
    float b;
public:
    item(int x, float y) 
    {
        b = y;
        cout<<"b intialized"<<endl;
    };
    void display(){
        cout<<"Value of b : "<<b<<endl;
    };
    ~item(){
        cout<<"Item Destructor called"<<endl;
    };
};

class finalproduct : public item, public product
{
private:
    string name;
public:
    finalproduct(int x, float y, string n) : product(x), item(x, y)
    {
        name = n;
        cout<<"name intialized"<<endl;
    };
    void print(){
        cout<<"Name : "<<name<<endl;
    };
    ~finalproduct(){
        cout<<"Finalproduct Destructor called"<<endl;
    };
};

int main(){
    finalproduct fp(10, 20.5, "Gadget");
    fp.print();
    fp.display();
    fp.show();
}