#include<array>
#include<iostream>
struct Leg// тип Leg
{
    int length;// тип int, объект length
};

struct Arm// тип Arm
{
    int power;// тип int, объект power
};

struct Person// тип Person
{
    std::array<Leg, 2> legs;//массив из 2 объектов типа Leg
    Arm arms[2];// массив из 2 объектов типа Arm
};
int main()// тип int
{
    Person person;// создание объекта person типа Person
    //person.legs[0].length=1;
   // person.arms[1].power=8;  
}