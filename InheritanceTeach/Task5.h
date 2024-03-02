#include <iostream>

class Base{
private:
int x;
int y;
public:

Base();
Base(int z);
Base(const Base& other);    // copy constructor
Base(Base&& other);             // move constructor
~Base();

int getX() const;
int getY() const;


};

class Derived: public Base
{
private:
    int n;
    int m;
public:
    Derived();
    Derived(int a);
    Derived(const Derived& other);    // copy constructor
    Derived(Derived&& other);       // move constructor
    ~Derived();
};
