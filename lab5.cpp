#include <iostream>
#include <cassert>

int main() {
    std::string_view h = "000011110f";
    int coint = 0;
    int first = 0;
    int other = 0;
    for (char c : h) {
        if (c == '1') {
            coint++;

        }
        else if (c == '0') {
            first++;
        }
        else {
            other++;
        }
    }
   /*for (int i = 0; i < h.size(); i++) {
        char c = h[i];  
        if (c == '1') {   
            coint++;
        }
    }*/ 
    
    std::cout << coint << std::endl;
    std::cout << first << std::endl;
    std::cout << other << std::endl;





}