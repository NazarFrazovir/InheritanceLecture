#include <iostream>


template <typename T>
class Base
{

private:
    T data;

public:
    // Constructor:  
   Base(const T& val):data(val){}

    // Destructor:
    ~Base(){}


    // Method:
    void printBaseData()const {std::cout<<"Data in base class "<<std::endl;}
};

template <typename T>
class Derived :public Base<T>{

public:
    // Constructor:
    Derived(const T& val)
    :Base<T> (val){}

    //Destructor:
    ~Derived(){}

    //Method:
    void printDerivedData()const {std::cout<<"Data in derived class"<<std::endl;}

};
