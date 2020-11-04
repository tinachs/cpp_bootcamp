/*
Write a program which can guess the number that user is thinking of – between 1-128 – you can ask anything you
want up to 7 times.
*/

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
    int randomNumber, lowrange = 1, highrange = 128; 
    int i= 1;
    string userinput;
    
    while (i <= 7) {
        
        int randomNumber = rand()%((highrange - lowrange) + 1) + lowrange;
        
        cout << "Guess number " << i << " is: " << randomNumber << "\n";
        cout << "Please Enter High, or Low, or Correct.\n";
        
        getline(cin, userinput);
        
        if (userinput == "High") {
            
            highrange = randomNumber ;
                
        }else if (userinput == "Low") {
            
            lowrange = randomNumber;
               
        }else{
            
            cout << "The number guessed with "<< i <<  " trial!\n";
            
            break;
        }
        i++;
    }
    cout << "The machine failed to guss the number within 7 trials!" ;
  
}