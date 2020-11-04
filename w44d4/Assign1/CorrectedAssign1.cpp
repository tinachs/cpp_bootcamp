#include <iostream>

const size_t SIZE = 10;

int function() {
    return std::rand();
}


int *fillArray() {
    
    // Second issue
    int *a = new int[SIZE];

    // YOU ARE NOT SUPPOSE TO CHANGE THE LINE BELOW
    size_t i = SIZE;
    
    // if (1) std::cout << "VALUE is TRUE" << std::endl;        
    // if (0) std::cout << "VALUE  TRUE" << std::endl;        

    // First issue
    for (; i ; --i) {
        a[i-1] = function(); 

        /*
        for ( int i=SIZE-1; i >=0 ; i--){
            Code
        }    
        */  
    }
    return a;    
}

// a[SIZE] same as *a
void printArray(int a[SIZE]) {        
    for (size_t i = 0; i < SIZE; i++) {
        // problem for random number didn't work std::cout << *a+i << std::endl;
        std::cout << *(a+i) << std::endl;
    }    

// Deleting the pointer
// Add [] after delete because we define [SIZE] as array in the pointer declaration
    delete [] a;
}

// Third issue (_b == true)  (_b == false) 
void printBool (bool _b) {
    if (_b == true) {
        std::cout << "VALUE is TRUE" << std::endl;        
    } else if (_b == false)    {
        std::cout << "VALUE is FALSE" << std::endl;        
    }    
}


// YOU ARE NOT ALLOWED TO CHANGE THE RETURN TYPE
// Problem solve by adding & to pointer
void resizeForMe(char *&a, size_t _newSize) {
    
    // add [] below
    delete [] a;
    a = new char[_newSize];
}

/*
int f(int a){
    a++;
}

int f2(int &a){
    a++;
}
*/


int main() {
    
    /*
    int aa = 2;
    f(aa);
    std::cout << aa << std::endl;
    f2(aa);
    std::cout << aa << std::endl;
    return 0
    */


    // if (1)  std::cout << "VALUE is TRUE" << std::endl;        
    // if (!0) std::cout << "VALUE  TRUE" << std::endl;  
    // return 0;

    printArray(fillArray());

    printBool(false);

    char *a = new char[SIZE];        
    for (size_t i = 0; i<SIZE; i++) i%2 ? a[i] = 'A' : a[i] = 'D';    
    std::cout << "a is: " << a << std::endl;
    
    // Problem 1000 is wrong since we have 100
    resizeForMe(a,100);
    for (size_t i = 0; i<100; i++) i%2 ? a[i] = 'B' : a[i] = 'C';
    std::cout << "a is: " << a << std::endl;
     
    return 0;
}