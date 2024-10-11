#include <string.h>
#include <iostream>

struct TwoInts // создаем struct, где содержатся 2 переменные
{
    int a; 
    int b;
};

struct StructWithArray  // создаем struct, где содержатся массив и указатель
{
    int arr[4];
    int* someNumber;
};

int main()
{
    TwoInts i2 = { };
    i2.a = 5; // присваеваем (из struct TwoInts) а=5
    i2.b = 7;

    std::cout << i2.a << std::endl;// выводит 5
    std::cout << i2.b << std::endl;//выводит 7
    
    StructWithArray s = { };
    s.arr[0] = 10;// присваеваем 1 (то есть 0) элементу массива 10

    StructWithArray s1 = { };
    s1.arr[0] = 15;// присваеваем 1 (то есть 0) элементу массива 15

    StructWithArray* sPointer = &s;// создаем указатель на адресс s
    sPointer->arr[0] = 20;// присваеваем 0 элементу массива 20 через указатель

    std::cout << s.arr[0] << std::endl;// выводит 20
    s.arr[0] = 25;
    std::cout << s.arr[0] << std::endl;// выводть 25
    sPointer->arr[0] = 30;
    std::cout << s.arr[0] << std::endl;//выводит 30

    sPointer = &s1;// меняем указатель на адресс s1
    sPointer->arr[0] = 35;
    std::cout << s.arr[0] << std::endl;//выводит 30
    std::cout << s1.arr[0] << std::endl;// выводит 35

    StructWithArray structArray[2] = { };
    structArray[0].arr[3] = 77;// присваеваем 77 к элементу arr[3]
    structArray[1].someNumber = &structArray[0].arr[3];//создаем указатель 

    sPointer = &s;//меняем адресс
    int* pointer = &sPointer->arr[3]; // создаем указатель 
    s.arr[3] = 72;// присваеваем
    std::cout << *pointer;// выводит 72

    StructWithArray memory;
    memset(&memory, 0, sizeof(StructWithArray));//  функция memset заполняет область памяти, начиная с адреса &memory, нулями. Размер этой области равен размеру StructWithArray.
    return 0;
}