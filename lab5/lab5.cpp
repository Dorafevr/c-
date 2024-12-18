#include <iostream>
#include <cassert>
int app(std::string_view h)
{
    int count = 0;
  
    for (int i = 0; i < h.size(); i++)
    {
        char c = h[i];

        if (c == '1')
        {
            count++;
        }
    }
    std::cout << "one " << count << std::endl;

    return count;
}
void runTests()
{
    assert(app("000000") == 0);
    assert(app("001100") == 2);
    assert(app("111111") == 6);
    assert(app("010011") == 3);
    std::cout << "check";
}
int main()
{

    std::string_view h = "101011";
    app(h);
    runTests();
    return 0;
}