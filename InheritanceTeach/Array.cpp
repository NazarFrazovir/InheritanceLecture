#include <iostream>
#include "Array.h"

Array::Array(size_t size)
:size(0), arr(nullptr){
    if(size > 0){
        this->size=size;
        arr = new int[size]{};
    }
}
Array::Array(const Array& other)  // copy constructor
:size(other.size),arr(nullptr) // Копіюємо інший розмір, а вказівник встановлюємо 0.
{
    if(other.size > 0){
this->arr = new int[other.size];      // Виділяємо памʼять під таку же кількість як і other.size.
    for (size_t i = 0; i < size; i++)
    {                   
        this->arr[i] = other.arr[i];        // Проходимось по всіх елементах і копіюємо їх.
    }
    
    }
}
Array::~Array(){
    delete[] arr;       // Знищує массив на кучі
    arr = nullptr;
}


Array Array::operator=(const Array& other){
    
    if(this != &other){
        this->~Array();          // Якщо адреса не співпадає це означає що це не один і той самий обʼєт. Тоді ми викликаєм деструктор. 

        this-> size = other.size;

            if(other.size > 0 ){
                this-> arr = new int[other.size];
                for (size_t i = 0; i < size; i++)
                {
                   this->arr[i] = other.arr[i];
                }
                
            }
    }
    return *this;
}

int& Array::operator[](size_t index){
    if (index<size)
    {
        return arr[index];
    }
    std::exit(1); // Миттєво зупиняє програму
    
}