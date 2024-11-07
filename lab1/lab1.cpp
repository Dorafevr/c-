#include <iostream>
int main()
{
    int i = 69;
    int number = 72;
    i += number;//141
    // int a=15;
    int arr[3] {};
    int *a0 = &arr[0];//выделяем память для указателя, который ссылается на 0 элемент массива
    int *a1 = &arr[1];
    int *a2 = &arr[2];
    for (int il : arr)//проход по массиву
    {
        std::cout << "massiv arr " << il << std::endl;
    }

    int *iPointer = &i;
    int *ter = &i;
    number = *iPointer;//смена адресса для iPointer
    // ter=&i;
    *ter = 15;//i=141, стало 15
    iPointer = &arr[0]; // Смена адрес первого элемента массива
    *iPointer = 8;
    iPointer = iPointer + 2; // pointer arithmetic, смещает указатель на 2 элемента (2 * 4 = 8 байт) (то есть был на arr[0]->arr[2])
    *iPointer = 6;//arr[2]=6
    arr[0] = 5;
     
    std::cout << i << std::endl;//15
    std::cout << number << std::endl;//72
    std::cout << arr[0] << std::endl;//5
    std::cout << arr[1] << std::endl;//0
    std::cout << arr[2] << std::endl;//6
    // std::array<int, 6> arr2;// для создания массива
}