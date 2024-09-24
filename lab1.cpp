#include  <iostream>
int main(){

int i=69;
int number=72;
i+=number;
//int a=15;
int arr[3];
arr[0]=0;
arr[1]=0;
arr[2]=0;
int *a0=&arr[0];
int *a1=&arr[1];
int *a2=&arr[2];
for(int il : arr){
    std:: cout<<"massiv arr "<<il<<std::endl;
}
 
int* iPointer=&i;
//int* iPointer=&arr[1];

int* ter=&i;
number=*iPointer; 
//ter=&i;
*ter=15;
iPointer=&arr[0];//Сменить адрес в iPointer на адрес первого элемента массива
*iPointer=8;
iPointer=iPointer+2;//pointer arithmetic
*iPointer=6;
arr[0]=5;
//std::cin>> a;

// std::array<int, 6> arr2;// для создания массива
std::cout<<i<<std::endl;
std::cout<<number<<std::endl;
std::cout<<arr[0]<<std::endl;
std::cout<<arr[1]<<std::endl;
std::cout<<arr[2]<<std::endl;
int b;
	std::cin>>b; 
}