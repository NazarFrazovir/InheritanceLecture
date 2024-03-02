#include <iostream>
#include "Task5.h"


                                            // Base class:
Base::Base()
x(0),y(0){}
Base::Base(int z)
:x(0),y(z){}
Base::Base(const Base& other)               // copy constructor
:x(other.x),y(other.y){}
Base::Base(Base&& other)noexcept
:x(std::move(other.x)),y(std::move(other.y)){}                            // move constructor
Base::~Base(){}
int Base::getX() const {return x;}
int Base::getY() const {return y;}



                                        // Derived class:

Derived::Derived()                  // Конструктор за замовчуванням, який наслідує конструктор батьківського класу.
:Base(),n(0),m(0){}
Derived::Derived(int a)             // Коснтруктор з параметром, який наслідує конструктор батьківського класу.   
:Base(0),n(o),m(a){}
Derived::Derived(const Derived& other)
:Base(other),n(other.n),m(other.m){}   // copy constructor with inheritance
Derived::Derived(Derived&& other)noexcept                   //move constructor with inheritance
:Base(std::move(other.Base)),n(std::move(other.n)),m(std::move(other.m)){
    m = NULL;
    n = NULL;
}
Derived::~Derived(){}
