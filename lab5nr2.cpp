#include <iostream>
#include <cassert>
#include <array>
#include <span>
char app(std::array<char, 13 >  h) {
    int coint = 0;
    int other = 0;
    int space = -1;
    for (int i = 0; i < h.size(); i++) {
        char c = h[i];
        if (c == ' ') {
            coint++;
            if (space == -1) {
                space = i;
            }
            std::span<char> sp{ h.data() + space + 1, h.size() - space - 1 };
            std::cout << "after space: " << sp.data() << std::endl;
        }
        else {
            other++;
        }
    }
    std::cout << "space: " << coint << std::endl;
    std::cout << "other: " << other << std::endl;
    return coint;
}
void runTests()
{
    std::array<char, 13> test1{ "Hello world!" };
    assert(app(test1) == 1);
    std::array<char, 13> test2{ "Hejknjn h hh" };
    assert(app(test2) == 2);
    std::array<char, 13> test3{ "Hei nn h htf" };
    assert(app(test3) == 3);
    std::array<char, 13> test4{ "ahbhbhnonhh" };
    assert(app(test4) == 0);
    
}
int main() {
    std::array<char, 13 > ar1{ "hello world!" };
    app(ar1);
    runTests(); return 0;
}
