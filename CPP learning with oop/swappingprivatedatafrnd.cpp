#include<bits/stdc++.h>
using namespace std;

class A;

class B{
private:
    int data2;
public:
    void setdata2(int value2){
        data2 = value2;
    }
    void display(void){cout<<data2<<endl;}
    friend void exchange(class A &, class B &);
};

class A{
    private:
    int data1;
    public:
    void setdata1(int value1){
        data1 = value1;
    }
    void display(void){cout<<data1<<endl;}
    friend void exchange(class A &, class B &);
};

void exchange(A &x, B &y){
    int temp = x.data1;
    x.data1 = y.data2;
    y.data2 = temp;
}


int main(){
    A a1;
    B b2;    

    a1.setdata1(500);
    b2.setdata2(400);

    cout<<"Before exchange :"<<endl;
    a1.display();
    b2.display();

    exchange(a1 , b2);

    cout<<"After exchange :"<<endl;
    a1.display();
    b2.display();

}