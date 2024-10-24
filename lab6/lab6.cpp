#include <iostream>
#include <cassert>
#include <array>
#include <span>
int hello(int hello) {
    std::cout << "hello=" << hello;
    return hello;
}
int main() {
    hello(9);
}
//она обьявлена int hello(int hello);
//ошибка происходит из-за того что в функции ничего нет (то есть тела нет функции)
