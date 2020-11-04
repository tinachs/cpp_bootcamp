#ifndef BF_H
#define BF_H
#include <iostream>


struct  SpeedDistanceStatus {
    // Speed = 4 bits
    unsigned  speed:4;

    // Front = 3 bits
    unsigned  front:3;
    
    // Rear  = 3 bits
    unsigned  rear:3;
    
    
    // Right = 3 bits
    unsigned  right:3;
    
    // Left  = 3 Bits
    unsigned  left:3;
    
}__attribute__((packed));

#endif //BF_H