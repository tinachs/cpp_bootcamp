// Generate random numbers between 0-33, ten thousand times, then print how many duplicates of each number you have generated -- print in ascending order.

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

using namespace std;
int main() 
{ 
// Create an empty vector 
vector<int> vect;

int numbers=30;

//add/push an integer to the end of the vector

for (int i=0;i<numbers;i++){
  int randnum = rand() % 33+1;
  vect.push_back(randnum); 

}

// sorting the vector in asceding order 
  sort(vect.begin(), vect.end());
  
cout << "The sorted random numbers: "; 
cout << "\n"; 
//to traverse and print the vector from start to finish

for (int x : vect) 
cout << x << " ";


cout << "\n";

cout << "The repeated numbers: "; 
cout << "\n"; 

//to traverse and print the duplicate numbers

for (int i=0;i<numbers;i++){
  if (vect[i]==vect[i+1] && vect[i]!=vect[i-1] )
  cout << vect[i] << " "; 
}
cout << "\n"; 

return 0; 
}