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