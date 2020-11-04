/* 
Write a program which takes a positive number from user, and then fill in a 3-dimensional array of size [8,9,11]
with random positive numbers smaller than the one user has provided – pretty print the array.
*/ 

#include <iostream>
using namespace std;


int main(){
    int posNum;
    cout << "Insert a positive number : "; 
    cin  >>  posNum;
    
    int arraynums[8][9][11];

    for (int z = 0; z < 11; z++) {

        cout << "Array XY" << z+1 << ":\n{";

        for (int x = 0; x < 8; x++) {
            
            for (int y = 0; y < 9; y++) {
                
                arraynums[x][y][z] = rand() % posNum;
                cout << " " << arraynums[x][y][z]; 
                cout << " ";
                
            }
            
            cout << " \n ";   
        }

        cout << "}\n" ;  
    }
    
   
}