#include<iostream>

int main()
{
    int number1{1};
    short int number2{1};
    unsigned int number3{4294967295};
    const unsigned short int number{4};// No es modificable, no tiene signo y es de 16 bits osea 2 bytes

    float numberf1{1.6932473234234256232};

    unsigned char char1{254};

    std::cout << "Int size is: " << sizeof(number1) << " bytes" << std::endl;
    //[1][1][0][0] [1][1][0][1] [1][1][0][0] [1][1][0][1] [1][1][0][0] [1][1][0][1] [1][1][0][0] [1][1][0][1] 32 bits (compu)
    std::cout << "Short int size is: " << sizeof(number2) << " bytes" << std::endl;
    //[1][1][0][0] [1][1][0][1] [1][1][0][0] [1][1][0][1] 16 bits (tu super nintendo)
     std::cout << "Unsigned int size is: " << sizeof(number3) << " bytes" << std::endl;
    std::cout << "Float 1: " << numberf1 << std::endl;

    std::cout << "float: " << sizeof(float) << "bytes" <<std::endl;//32 bits
    std::cout << "double: " << sizeof(double) << "bytes" <<std::endl;//64 bits
    std::cout << "long double: " << sizeof(long double) << "bytes" <<std::endl;//96 bits

    std::cout << "char: "  << char1 << " " << sizeof(char) << " byte" <<std::endl;//8bits

    //std::cout << "Hello world";
    std::cin.get();

    return 0;
}