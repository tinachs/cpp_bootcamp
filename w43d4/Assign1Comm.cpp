// pointers to base class
#include <iostream>
using namespace std;

//----------------Parent/BaseClass------------------
class shape {

  protected:
  int width, height, radi;
    
  public:
  // constructor for circle 
  shape (int c){radi = c;}

  // constructor for Rectangle and Triangle
  shape (int a, int b){ width=a; height=b;}
    
  // Virtual function
  virtual int area () =0;

};

// Overloading comparison operator
bool operator==( shape &c, shape &r) { return (c.area() == r.area()); } 

 
//---------Children/Inherited classes (Rectangle,Square,etc.)------------------
class Rectangle: public  shape {
  
  public:
    // Function for calculating area
    int area()
      { return width*height; }
    // Constructor for getting width and height inputs of the Rectangle
    Rectangle(int a,int b) : shape(a,b) {}

};


class Triangle: public  shape {
  
  public:
  // Function for calculating area
    int area()
      { return width*height/2; }

   Triangle(int a,int b) : shape(a,b) {
     
   }
  
};

class Circle: public  shape {

  // Function for calculating area
  public:
    int area()
      { return 3 * radi * radi; }

    // Constructor for getting input
    Circle(int a): shape(a) {}
    

};

int main () {
  
//-------------Making Objects-------------

  Rectangle rec(2,2);
  Triangle trgl(2,2);
  Circle circle(1);


// Printing areas of different objects 
 
  cout <<"Area of Rectangle: " << rec.area() << '\n';
  cout <<"Area of Triangle: " << trgl.area() << '\n';
  cout <<"Area of Circle: " << circle.area() << '\n';


// Printing comparisons results

if (rec == trgl)
        cout << "The area of Rectangle and Triangle are the same.\n";
 
if (rec == circle)
        std::cout << "The area of Rectangle and circle are the same.\n";  
  
  return 0;
}