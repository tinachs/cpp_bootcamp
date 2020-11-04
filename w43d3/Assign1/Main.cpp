/*
A car service shop needs to keep track of the records of services they provide to their customer. Create a system
for them so they could keep ATLEAST the below records:
• Date the customer visited
• Services performed (at least 2 different services)
• Parts changed (at least 2 different parts)
• Payment (method & amount)

The purpose is to practice Object-Oriented concepts we learnt – don’t focus on features, put your time on defining objects.
*/

#include "Record.h"

int main() {
    
    //ClassName OBJName
    ServiceRecord SR1;  
    
    //OBJName.VariableName = VariableType::VariableValue;
    //Using ‘.‘ to Define variables in static memory 
    SR1.CustomerName = "John";
    SR1.Date = 20201021;
    SR1.Amount = 4000;
    SR1.ServiceType = "Changing Oil";
    SR1.Parts = "Engine";
    SR1.PaymentMethod = "Card";

    SR1.PrintServiceData();

    ServiceRecord *SR2 = new ServiceRecord; 
    //Using ’->‘ to Define pointers in dynamic memory 
    SR2->CustomerName = "Anna";
    SR2->Date = 20191108;
    SR2->Amount = 8000;
    SR2->ServiceType = "Changing Filter";
    SR2->Parts = "Air";
    SR2->PaymentMethod = "Cash";
    
    SR2->PrintServiceData();
    
    return 0;
}





