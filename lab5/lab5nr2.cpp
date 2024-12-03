#include <iostream>
#include <string_view>
#include <cassert> 

int findSpace(std::string_view a) {
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] == ' ') {
            return i;  
        }
    }
    return a.size();  
}

std::string_view secondWord(std::string_view p) {
    int length = p.size();
    int space = findSpace(p);

    if (space == length) {
        return "";
    }
    p = p.substr(space + 1); 
 
}

void runTests() {
    assert(secondWord("Hello world") == "world");
    assert(secondWord("Hello my dear") == "my");
    assert(secondWord("") == "");
    assert(secondWord(" ") == "");
    assert(secondWord(" a ") == "a");
    assert(secondWord("a  ") == "");
    assert(secondWord("a  b") == "b");
    assert(secondWord("hello     world    dear") == "world");

    std::cout << "All tests passed!" << std::endl;
}

int main() {
    std::cout << secondWord("Hello world") << std::endl;
    runTests();  
 
    return 0;
   
}
