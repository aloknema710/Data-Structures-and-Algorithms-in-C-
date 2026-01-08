// simple factory -> a factory class that decides which concrete class to instantiate

#include<bits/stdc++.h>
using namespace std;

class Burger{
private:
    /* data */
public:
    virtual void prepare() = 0; //pure virtual
    virtual ~Burger(){}
};

class BasicBurger : public Burger
{
private:
    /* data */
public:
    void prepare() override{
        cout<<"Preparing Basic Burger with bun lettuce patty and ketchup";
    }
};
class StandardBurger : public Burger
{
private:
    /* data */
public:
    void prepare() override{
        cout<<"Preparing Standard Burger with bun lettuce cheese patty and ketchup";
    }
};
class PremiumBurger : public Burger
{
private:
    /* data */
public:
    void prepare() override{
        cout<<"Preparing Premium Burger with gourmet bun cheese lettuce  premium patty and ketchup";
    }
};

class BurgerFactory{
public:
    Burger* createBurger(string& type){
        if (type == "basic") return new BasicBurger();

        else if(type == "standard") return new StandardBurger();
        
        else if(type == "premium") return new PremiumBurger();

        else cout <<"Not an order"; return nullptr;
    }
};

int main(){
    string type = "standard";

    BurgerFactory* myfactory = new BurgerFactory();

    Burger* burger = myfactory ->createBurger(type);

    burger->prepare();
}