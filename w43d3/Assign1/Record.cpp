//implementation of the class methods are written in the .cpp files.

#include "Record.h"


//The name of the class together with scope operator ‘::‘ is using to define the method of the class outside the class,

void ServiceRecord::PrintServiceData(){

    cout << "The service data of: " << CustomerName << endl;
    cout << "Date: " << Date << endl;
    cout << "Amount: " << Amount << endl;
    cout << "Parts: " << Parts << endl;
    cout << "ServiceType: " << ServiceType << endl;
    cout << "PaymentMethod: " << PaymentMethod << endl;

}

void PrintServiceData(){
  
}




























