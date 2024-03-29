#include <iostream>
#include "Array.h"

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

/* 3. Реалізація Наслідуванняю
Синтаксис наслідування:

class Імʼя_Дочірнього_Класу : Модифікатор_Наслідування Імʼя_Батьківського_Класу
{
    Реалізація класу
}
*/

// -- Дочірній клас - це клас, який наслідує
// -- Батьківський клас - це клас від якого наслідується

/* 4. Модифікатор доступу protected
    Модифікатор доступу protected означає що елемменти можуть бути доступні з:

- Самим класом, в якому вони визначені.
- Похідини класами(у тому числі і через їхні обʼєкти)
*/

/* 5. Наслідування і конструктори

- Конструктор за замовчуванням: Створюється за необхідності в дочірньому класі, якщо в батьківському класі
він не був визначений явно. У цьому випадку при створені обʼєкта похідного класу, буде створений конструктор
батьківського класу,якщо він доступний.

- Конструктор батьківського класу має викликатися першим, а конструктор дочірнього класу, викликається після нього.
Це все відбувається завдяки списку ініціалізації.

- Деструктор, не наслідується, і викликається наоборот, спочатку викликається деструктор дочірнього класу,
потім деструктор батьківського класу.

- Конструктор копіювання: Copy constructor також може бути успадкований в дочірньому класі. У цьому випадку
обʼєкти дочірнього класу можуть бути скопійовані з обʼєктів базового класу з Copy constructor базового класу.
(Так само із move constructor)
*/

/* 6. Наслідування і оператори
- Дочірній клас успадковує всі доступні оператори від базового класу.

- Дочірній клас також може перевантажувати оператори, які вже були визначені в батьківському класі.В цбому випадку,
перевантаження в дочірньому класі замінює перевантаження в батьківському класі для обʼєктів дочірнього класу.
*/

/* 7. Наслідування і статичні методи

- Успадкування статичних методів відбувається так само, як і для звичайних методів класу. Статичні методи є методами класу,
а не екземлярами конкретного обʼєкта, тому вони не повʼязані з конкретними екземплярами класу, коли клас успадковує інший клас,
він також і успадковує його метод.
*/

/* 8. Наслідування і шаблони

- (Нагадаємо що таке шаблони) - Шаблони (template) - це механізм, який дозволяє створювати загальні класи, або функції,
що можуть працювати з будь-яким типом даних. Вони дозволяють писати коди, який може бути параметризований типами даних,
що дозволяє зберігати коди один раз, а потім використовувати його один раз, без необхідності дублювати код.

- Використання шаблонів в класах: Ви можете використовувати шаблони в якості типів даних для уникнення конкретизаціх типів.
Наприклад ви можете мати клас, який успадковує клас шаблону, і використовувати його з різним типом даних.

- Успадкування шаблонів класу: Ви можете успадковувати класи шаблонів як будь-який інший клас. Дочірній клас може використовувати
параметри батьківського класу шаблону, або визначити власні параметри шаблону.

- Спеціалізація шаблонів в дочірніх класах: Ви можете створювати спеціалізовані версіх шаблонів для певних типів даних
у похідних класах. Це дозволяє вам надати специфічну реалізацію для конкретних типів. 
*/

/* 9. Модифікатори наслідування

- Модифікатори наслідування використовуються для зміни видимості членів батьківського класу. Вони впливають на те, які члени
батьківського класу будуть доступні в похідному класі. В С++ існують три типи модифікаторів наслідування:
(1)public: Всі публічні члени батьківського класу залишаються публічними і в дочірньому класі:
class Derived:public Base{};

(2)private: Всі члени батьківського класу стають приватними у дочірньому класі. Це означає, що вони не доступні за межами дочірнього класу.
class Derived:private Base{}

(3)protected: Всі публічні та захищені члени базового класу стають захищеними в похідному класі. Приватні члени батьківського класу не доступні у дочірньому класі.
class Derived:protected Base{}

*/

/* 10. Відмінність між структурою та класом

(1): В структурах всі поля та методи за замовчуванням є публічними, а в класах наоборот (приватними).
(2): В структурах наслідування за замовчуванням відкрите(public), в класах закрите(private).
(3): Структури в С++ можуть мати методи та поля, але вони не підтримують спадковість(інкапсуляцію,поліморфізм). 
*/

/* 11. Множинне наслідування

- Множинне наслідування відбувається, коли клас успадковує функціональність більше ніж від одного батьківського класу.
Це означає що дочірній клас має доступ до членів всіх батьківських класів.

Приклад:

class A{
    public:
void printA(){std::cout<<"Print A"<<std::endl;}
};
class B {
    public:
void printB(){std::cout<<"Print B"<<std::endl;}
};
class Derived:public A, public B{
    public:
void printDerived(){std::cout<<"Print derived"<<std::endl;}
};

*/

// struct Point{

// };

// class Person{};

// class Vehicle{
//     protected:
// Point position;
// double height;
// double lenght;
// double width;
// double weight;
//     public:
// void Move(Point direction);
// void Rotate(Point direction);
// void Scale(float factor);
// };

// class Car:public Vehicle
// {
//     private:
// int doors;
// int tankCapacity;
// char model[30];
// char mark[30];
// bool isStarted;

//     public:
// void FillUp(int points);
// void Start();
// };

// class Plane:public Vehicle
// {
//     private:
// int seets;
// Point route[2];

//     public:
// void AutorizePeople(const Person* peoplelist);
// void Fly();
// void CallDispatcher(Person dispatcher);
// };

int main(){

// Car car1;
// car1.FillUp(10);

// car1.Scale(10); // Тепер ми наслідуємо метод Scale із класса Vehicle
Array arr1(25);
    return 0;
}
