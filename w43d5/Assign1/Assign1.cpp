// Write a function template which receives two of any shapes from yesterday’s assignment, compares them, and prints out the result.

// increaser
#include <iostream>
using namespace std;
 class shape{

   protected:
   int height, width, radi;

   public:
   shape(int a, int b){width = a; height = b;}
   shape(int r){radi=r;}

  // Virtual functions for area and circumference
   virtual int area ()=0;

   virtual int circumference ()=0;

  
 };

template <class T1, class T2>
bool are_equal (T1  &c , T2 &r)
 {bool returnVal = false;
    if ( (c.area() == r.area()) && (c.circumference() == r.circumference()) ) 
        returnVal = true;    
    return returnVal;
}

template <class T1, class T2>
bool are_less (T1  &c , T2 &r)
 { bool returnVal = false;
    if ( (c.area() < r.area()) ||
         ( (c.area() == r.area()) && (c.circumference() < r.circumference() )))
        returnVal = true;    
    return returnVal;
}

template <class T1, class T2>
bool are_greater (T1  &c , T2 &r)
 { bool returnVal = false;
    if ( (c.area() > r.area()) ||
         ( (c.area() == r.area()) && (c.circumference() > r.circumference() )))
        returnVal = true;    
    return returnVal;
}



 class Rectangle: public shape{
   public:
   Rectangle(int a,int b) : shape(a,b) {}
   int area(){return width*height;}
   int circumference ()
      { return (2*width)+(2*height); }


 };

 class Triangle: public shape{
   public:
   Triangle(int a,int b) : shape(a,b) {}
   int area(){return width*height/2;}
   int circumference ()
      { return 3*width; }

 };

 class Circle: public shape{
   public:
   int pi=3;
   int area(){return pi*radi*radi;}
   Circle(int r) : shape(r) {}
   int circumference ()
      { return 2*pi*radi; }

 };

int main ()
{

  shape *circ1 = new Circle(5);
  shape *circ2 =  new Circle(100);

  shape *triang1 = new Triangle(2,23);
  shape *triang2 = new Triangle(3,5);

  shape *rectangle1 = new Rectangle(23,1);
  shape *rectangle2 = new Rectangle(2,1);

  shape *shapes [6] ={circ1,circ2,triang1,triang2,rectangle1,rectangle2};

  for (size_t i = 0; i < 6; i++) 
        for (size_t j = i + 1; j < 6; j++) {
            if (are_greater (*shapes[i], *shapes[j])) cout << i << " is greater than " << j << endl;
            if (are_equal (*shapes[i], *shapes[j])) cout << i << " is equal to " << j << endl;
            if (are_less (*shapes[i], *shapes[j])) cout << i << " is less than " << j << endl;
            
        }    

  return 0;
}