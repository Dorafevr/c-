#include <iostream>
struct FruitCount
{
    int apples;
    int pears;
    int oranges;
};
void FruitCounts(FruitCount a)
{
    while (true)
    {
        bool apple = a.apples > 5;
        bool pear = a.pears < 8;
        bool orange = a.oranges == (2 * a.apples);
        bool compare = apple && pear && orange;
        if (compare)
        {
            std::cout << "hello";
            break;
        }
        std::cout << "goodbye";
        break;
    }
}
int main()
{
    FruitCount fruit{};

    std::cout << "Apples:";
    std::cin >> fruit.apples;
    std::cout << "Pears:";
    std::cin >> fruit.pears;
    std::cout << "Oranges:";
    std::cin >> fruit.oranges;

    FruitCounts(fruit);

    /*  bool p=apples>5 && pears<8 && oranges>(2*apples);//временная переменная
        bool a=apples>5;
        bool b= pears<8;
        bool c= oranges>(2*apples);
        bool o =a && b && c;
        if(o){
            std::cout<<"hello";
        }
        else
        { std::cout<<"goodbye";}
        while(true)
        {
            bool a=apples>5;
            bool b= pears<8;
            bool c= oranges>(2*apples);
            bool o =a && b && c;
            if(o)
            {
            std::cout<<"hello";
            break;
            }
           std::cout<<"goodbye";
           break;
        }*/
}
