#include<iostream>

int main()
{
    int number1{2147483647};
    short int number2{1};
    unsigned int number3{4294967295};

    std::cout << "int size is: " << sizeof(number1) << " bytes" << std::endl;
    //[1][1][0][0] [1][1][0][1] [1][1][0][0] [1][1][0][1] [1][1][0][0] [1][1][0][1] [1][1][0][0] [1][1][0][1] 32 bits (tu compu)
    std::cout << "short int size is: " << sizeof(number2) << " bytes" << std::endl;
    //[1][1][0][0] [1][1][0][1] [1][1][0][0] [1][1][0][1] 16 bits (tu super nintendo)
    std::cout << "short int size is: " << sizeof(number3) << " bytes" << std::endl;

    std::cout << "Hello world";

    std::cin.get();

    return 0;
}