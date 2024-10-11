#include <iostream>
void FruitCounts(int a, int p, int o)
{
     while(true)
    {
        bool apple=a>5;
        bool pear= p<8;
        bool orange= o>(2*a);
        bool compare =apple &&pear && orange;
        if(compare)
        {
        std::cout<<"hello";
        break;
        }
       std::cout<<"goodbye";
       break;
    }
}
int main()
{
    int apples;
    int pears;
    int oranges;
   

    std::cout << "Apples:";
    std::cin >> apples;

    std::cout << "Pears:";
    std::cin >> pears;

    std::cout << "Oranges:";
    std::cin >> oranges;
    FruitCounts(apples, pears, oranges);
    //bool p=apples>5 && pears<8 && oranges>(2*apples);//временная переменная
   /* bool a=apples>5;
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