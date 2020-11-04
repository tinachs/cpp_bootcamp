#include <cstring>
#include <bitset>
#include "ReadInfo.h"

// Run Forth:

void printField(const field *_f) {
    
    std::cout << "----------------" << std::endl;
    std::cout << "(int)_f.b1  " << (int)_f->b1  << std::endl; 
    std::cout << "(int)_f.b2  " << (int)_f->b2  << std::endl;
    std::cout << "(int)_f.b3  " << (int)_f->b3  << std::endl;
    std::cout << "(int)_f.b4  " << (int)_f->b4  << std::endl;
    std::cout << "(int)_f.b5  " << (int)_f->b5  << std::endl;
    std::cout << "(int)_f.b6  " << (int)_f->b6  << std::endl;
    std::cout << "(int)_f.b7  " << (int)_f->b7  << std::endl;
    std::cout << "(int)_f.b8  " << (int)_f->b8  << std::endl;
    std::cout << "(int)_f.b9  " << (int)_f->b9  << std::endl;
    std::cout << "(int)_f.b10 " << (int)_f->b10 << std::endl;
    std::cout << "(int)_f.b11 " << (int)_f->b11 << std::endl;
    std::cout << "(int)_f.b12 " << (int)_f->b12 << std::endl;
    std::cout << "(int)_f.b13 " << (int)_f->b13 << std::endl;
    std::cout << "(int)_f.b14 " << (int)_f->b14 << std::endl;
    std::cout << "(int)_f.b15 " << (int)_f->b15 << std::endl;
    std::cout << "(int)_f.b16 " << (int)_f->b16 << std::endl;
    std::cout << "----------------" << std::endl;

}

// Run Second:

void printStuff(uint16_t data) {
    //Struct Name 
    field *_f;
    // Both sides should have be the same types like both should be pointer
    // Converting between integers and pointers or on obscure architectures where pointer representation depends on its type.
    _f = reinterpret_cast<struct field*> (&data);

    // Run Third:
    printField (_f);

}

// Run First:

int main() {
    uint16_t a;
    // This is our output that will be converted to binary when we run the program
    a = 52;
    
    //Template of Bitset is :  < std::size_t N >
    //Bitset represents a fixed-size sequence of N bits and stores values either 0 or 1.
    std::cout << std::bitset<16>(a) << std::endl;
    printStuff(a);

    return 0;
}
