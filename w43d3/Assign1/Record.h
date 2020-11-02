//Class definitions usually reside in header files

#include <iostream>
using namespace std;


class ServiceRecord {

//Attributes
public:
    string CustomerName;
    int Date;
    int Amount;
    string Parts; 
    string ServiceType; 
    string PaymentMethod; 

 
//Method
public:
void PrintServiceData();

}; 