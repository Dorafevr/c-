include <iostream>
#include <cassert>
int app(std::string_view h) {
    int coint = 0;
    int first = 0;
    int other = 0;
    /*for (char c : h) {
         if (c == '1') {
             coint++;

         }
         else if (c == '0') {
             first++;
         }
         else {
             other++;
         }
     }*/
    for (int i = 0; i < h.size(); i++) {
        char c = h[i];

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
    std::cout << "one " << coint << std::endl;
    std::cout << "zero" << first << std::endl;
    std::cout << "other" << other << std::endl;
    return coint;
}
void runTests()
{
    assert(app("000000") == 0);
    assert(app("001100") == 2);
    assert(app("111111") == 6);
    assert(app("010011") == 3);
    std::cout << "check";

}
int main() {

    std::string_view h = "101011";
    app(h);
    runTests();
    return 0;


}