struct Leg// ��� struct 
{
    int length;// ��� int, ������ length
};

struct Arm// ��� struct 
{
    int power;// ��� int, ������ power
};

struct Person// ��� struct 
{
    std::array<Leg, 2> legs;
    Arm arms[2];// �������
};

int main()// ��� int
{
    Person person;//������
}