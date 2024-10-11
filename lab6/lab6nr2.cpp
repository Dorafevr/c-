#include <iostream>
 #include "a.cpp"
static int hello(int hello){
    return hello;
}
int main() {
    int f = hello(9);
    std::cout << f << std::endl;
}