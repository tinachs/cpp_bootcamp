#include <iostream>
#include <bitset>
#include <cstring>
#include "EncodeInfo.h"


uint16_t Encode (int Speed,int Distance_Front,int Distance_Rear, int Distance_Right, int DistanceLeft) {
  SpeedDistanceStatus s;
  s.speed = Speed / 20;
  s.front = Distance_Front / 150;
  s.rear  = Distance_Rear / 150;
  s.right = Distance_Right / 150;
  s.speed = DistanceLeft / 150;

  uint16_t data;
    data =  s.speed << 12;
    data |= s.front << 9;
    data |= s.rear  << 6;
    data |= s.right << 3;
    data |= s.left  << 0;
  //data |= s.left;
  return data;

}


int main() {
    
    uint16_t InputData = Encode(500, 100, 140, 160,800);

    std::cout << std::bitset<16>(InputData) << std::endl;

    return 0;
}


