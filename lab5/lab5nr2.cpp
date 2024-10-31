#include <iostream>
#include <cassert>
#include <string>
#include <span>

std::span<const char> app(const std::string& h) {
    int space = -1;
    for (int i = 0; i < h.size(); ++i) {
        if (h[i] == ' ') {
            space = i;
            break;
        }
    }
    if (space == -1 || space + 1 >= h.size()) {
        return std::span<const char>{};
    }
    return std::span<const char>(h.data() + space + 1, h.size() - space - 1);
}

void runTests() {
    auto toString = [](std::span<const char> sp) {    // функция для преобразования span в строку
        return std::string(sp.data(), sp.size());
        };
    assert(toString(app("Hello world!")) == "world!");
    assert(toString(app("Hejknjn h hh")) == "h hh");
    assert(toString(app("Hei nn h htf")) == "nn h htf");
    assert(toString(app("ahbhbhnonhh")) == "");
}

int main() {
    std::string input = "hello world!";
    std::span<const char> result = app(input);
    std::cout << "After space: " << std::string(result.data(), result.size()) << std::endl;
    runTests();
    return 0;
}
