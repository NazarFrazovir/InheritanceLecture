#include <iostream>

                                       // Наслідування (Inheritance)

/*
    Наслідування - Один із основних принципів ООП

* Надає можливість створити нові класи на базі інсуючих
* Дозволяє перевикористання коду уникаючи його дублювання
* Надає можливість модифікувати поведінку існуючих класів у нових
* Буває Single inheritance or Multiple inheritance
*/


/* 1. Згадуємо інкапсуляцію.

Інкапсуляція - це концепція ООП, яка дозволяє обʼєднувати дані та методи їх обробки в одну
єдину сутність, яка називається класом або строктурою і захищати їх від зовнішнього втручання
завдяки модифікаторам доступу(privat,protected).
*/

/* 2. Що таке насідування?
Наслідування це концепція ООП яка дозволяє створювати нові класи на основі уже існуючих.
*/

/* 3. Реалізація Наслідування
Синтаксис наслідування:

class Імʼя_Дочірнього_Класу : Модифікатор_Наслідування Імʼя_Батьківського_Класу
{
    Реалізація класу
}
*/
// -- Дочірній клас - це клас, який наслідує
// -- Батьківський клас - це клас від якого наслідується

struct Point{

};

class Person{};

class Vehicle{
    private:
Point position;
double height;
double lenght;
double width;
double weight;
    public:
void Move(Point direction);
void Rotate(Point direction);
void Scale(float factor);
};

class Car:public Vehicle
{
    private:
int doors;
int tankCapacity;
char model[30];
char mark[30];
bool isStarted;

    public:
void FillUp(int points);
void Start();
};

class Plane:public Vehicle
{
    private:
int seets;
Point route[2];

    public:
void AutorizePeople(const Person* peoplelist);
void Fly();
void CallDispatcher(Person dispatcher);
};

int main(){

Car car1;
car1.FillUp(10);

car1.Scale(10); // Тепер ми наслідуємо метод Scale із класса Vehicle


    return 0;
}
