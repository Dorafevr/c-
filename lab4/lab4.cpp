#include <iostream>

void Test(int number)
{
    if (number == 5)//guard clause
    {
        std::cout << "The number is 5" << std::endl;
        return;//early return
    }
    
        std::cout << "The number is not 5" << std::endl;

        if (number % 2 == 1)
        {
            std::cout << "The number is not divisible by 2" << std::endl;
        }
        else
        {
            std::cout << "The number is divisible by 2" << std::endl;

            if (number == 6)
            {
                std::cout << "The number is 6" << std::endl;
            }
        }  
    
}
int main()
{
    int a = 10;
    Test(a);
    
}