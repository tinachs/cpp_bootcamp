//Assignment 2 : writing test cases for linked list


#include <iostream>
using namespace std;
struct node {
   int data;
   node *next;
};
 node* front = NULL;
 node* rear = NULL;
 node* temp;
void AddElement(char val) {
   //int val;
   //cout<<"Add Element to the list : "<<endl;
   //cin>>val;
   if (rear == NULL) {
      rear = (node *)malloc(sizeof(node));
      rear->next = NULL;
      rear->data = val;
      front = rear;
   } else {
      temp=(node *)malloc(sizeof(node));
      rear->next = temp;
      temp->data = val;
      temp->next = NULL;
      rear = temp;
   }
}
void Delete() {
   temp = front;
   if (front == NULL) {
      cout<<"No element to delete"<<endl;
      return;
   }
   else
   if (temp->next != NULL) {
      temp = temp->next;
      //cout<<"Element deleted from queue is : "<<front->data<<endl;
      free(front);
      front = temp;
   } else {
      //cout<<"Element deleted from queue is : "<<front->data<<endl;
      free(front);
      front = NULL;
      rear = NULL;
   }

}
void Display() {
   temp = front;
   if ((front == NULL) && (rear == NULL)) {
      cout<<"list is empty"<<endl;
      return;
   }
   cout<<"list elements are: ";
   while (temp != NULL) {
      cout<<temp->data<<" ";
      temp = temp->next;
   }
   cout<<endl;
   
}

// Test case 1: for adding numbers between 0-10 and diplaying the list

void test1(){

  cout<< "Test Case 1: "<<endl;

  for (int i=0;i<11;i++){
    AddElement(i);}

  Display();

  cout<< "\n";
 
};
// Test case 2: Removing the last 5 numbers from the list and display the list
void test2(){

  cout<< "Test Case 2: "<<endl;

  for (int i=0;i<5;i++)
    Delete();

  Display();

  cout<< "\n";
 
  
};

// Test case 3: Adding 10 random numbers 

void test3(){

  cout<< "Test Case 3: "<<endl;

  for (int i=0;i<11;i++)
    AddElement(rand()%10);

  Display();

   cout<< "\n";
 
  
};

// Test Case 4: Removing alla of the numbers and displaying the list

void test4(){

  cout<< "Test Case 4: "<<endl;

  

  for (int i=0;i<17;i++)
    Delete();
  
  Display();

  cout<< "\n";
  
};

// Test Case 5: deliting the list before adding to list

void test5(){

  cout<< "Test Case 4: "<<endl;

  Delete();
  
  Display();

  cout<< "\n";
  
};




int main() {
  test1();

  test2();

  test3();

  test4();

  test5();

  return 0;
}