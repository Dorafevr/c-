struct Leg// тип struct 
{
    int length;// тип int, объект length
};

struct Arm// тип struct 
{
    int power;// тип int, объект power
};

struct Person// тип struct 
{
    std::array<Leg, 2> legs;
    Arm arms[2];// объекты
};

int main()// тип int
{
    Person person;//объект
}