/* 
Write a program which takes a positive number from user, and then fill in a 3-dimensional array of size [8,9,11]
with random positive numbers smaller than the one user has provided – pretty print the array.

Modify your first assignment from yesterday to receive the dimensions of the arrays from the user.
*/ 


#include <iostream>
using namespace std;

int main()
{

    int posNum;
    cout << "Insert a positive number : "; 
    cin  >>  posNum;
    
    int X, Y, Z;
    cout << "Insert the 1st dimension: "; 
    cin  >>  X;
    cout << "Insert the 2nd dimension: "; 
    cin  >>  Y;
    cout << "Insert the 3rd dimension: "; 
    cin  >>  Z;

	int*** A = new int**[Z];

	for (int i = 0; i < Z; i++)
	{
		A[i] = new int*[X];

		for (int j = 0; j < X; j++)
			A[i][j] = new int[Y];
	}

	for (int i = 0; i < Z; i++)
		for (int j = 0; j < X; j++)
			for (int k = 0; k < Y; k++)
				A[i][j][k] = rand() % posNum ;

	for (int i = 0; i < Z; i++)
	{ cout << "Layer " << i+1 <<":" << endl;
		for (int j = 0; j < X; j++)
		{
			for (int k = 0; k < Y; k++)
        
			  cout << A[i][j][k] << " ";
			  cout << endl;
			}
		 cout << endl;
	}
	return 0;
}

