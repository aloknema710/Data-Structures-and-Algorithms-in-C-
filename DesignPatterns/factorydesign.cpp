#include<bits/stdc++.h>
using namespace std;

class Burger{
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
class BasicWheatBurger : public Burger
{
private:
    /* data */
public:
    void prepare() override{
        cout<<"Preparing Basic Wheat Burger with bun lettuce patty and ketchup";
    }
};
class StandardWheatBurger : public Burger
{
private:
    /* data */
public:
    void prepare() override{
        cout<<"Preparing Standard Wheat Burger with bun lettuce cheese patty and ketchup";
    }
};
class PremiumWheatBurger : public Burger
{
private:
    /* data */
public:
    void prepare() override{
        cout<<"Preparing Premium Wheat Burger with gourmet bun cheese lettuce  premium patty and ketchup";
    }
};


class BurgerFactory{
    public:
        virtual Burger* createburger(string& type) = 0;
};


class SinghBurger: public BurgerFactory{
    Burger* createburger(string& type)override{
        if(type == "basic") return new BasicBurger();

        else if(type == "standard") return new StandardBurger();
        
        else if(type == "premium") return new PremiumBurger();

        else cout <<"Not an order"; return nullptr;
    }
};

class KingBurger: public BurgerFactory{
    Burger* createburger(string& type)override{
        if(type == "basic") return new BasicWheatBurger();

        else if(type == "standard") return new StandardWheatBurger();
        
        else if(type == "premium") return new PremiumWheatBurger();

        else cout <<"Not an order"; return nullptr;
    }
};


int main(){
    string type = "basic";
    BurgerFactory* myfactory = new KingBurger();
    Burger* burger = myfactory->createburger(type);
    burger->prepare();
}