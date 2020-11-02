#include <iostream>
using namespace std;
struct node {
   int data;
   node *next;
};
 node* front = NULL;
 node* rear = NULL;
 node* temp;
void AddElement() {
   int val;
   cout<<"Add Element to the list : "<<endl;
   cin>>val;
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
      cout<<"Element deleted from queue is : "<<front->data<<endl;
      free(front);
      front = temp;
   } else {
      cout<<"Element deleted from queue is : "<<front->data<<endl;
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
int main() {
   int ch;
   cout<<"1) Add to List"<<endl;
   cout<<"2) Delete from List"<<endl;
   cout<<"3) Display the list"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter your choice : "<<endl;
      cin>>ch;
      switch (ch) {
         case 1: AddElement();
         break;
         case 2: Delete();
         break;
         case 3: Display();
         break;
         case 4: cout<<"Exit"<<endl;
         break;
         
      }
   } while(ch!=4);
   return 0;
}
