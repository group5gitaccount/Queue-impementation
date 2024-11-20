/*Queue implementation for all operation(Enqueue, Dequeue and Display)*/
#include <iostream>
using namespace std;
#define SIZE 5 //static size
// define the maximum size of the queue
int A[SIZE];//Declare an array to store the que
int front = -1;
int rear = -1;
//function to check if queue is empty
bool isempty()
{
 if(front == -1 && rear == -1)
 return true;
 else
 return false;
}
//function to insert element in queue
void enqueue ( int value )
{
 if (rear == SIZE-1)// check if queue is full
  cout<<"Queue is full \n";
 else
 {
  if( front == -1) 
   front = 0;
  
  rear++;
  A[rear] = value;// insert the value at the rear of the queue
 }
}
//function to remove element from queue
void dequeue ( )
{
 if( isempty() )// check if the queue empty
  cout<<"Queue is empty\n";
 else
 if( front == rear )// if only one element is in the queue, reset front and rear
  front = rear = -1;
 else
  front++;// increment the front pointer
}
//function to display element at front
void showfront( )
{
 if( isempty()) 
  cout<<"Queue is empty\n";
 else
  cout<<"element at front is:"<<A[front]<<"\n";
}
//function to display elements of the queue
void displayQueue()
{
 if(isempty())
  cout<<"Queue is empty\n";
 else
 {
  for( int i=front ; i<= rear ; i++)
   cout<<A[i]<<" ";
  cout<<"\n";
 }
} 
int main()
{
//inserting elements in queue
 cout<<"Inserting elements in queue\n";
 enqueue(2);
 displayQueue();
 enqueue(3);
 displayQueue();
 enqueue(5);
 displayQueue();
 enqueue(7);
 displayQueue();
 enqueue(8);
displayQueue();
 //queue is full
 enqueue(9);
 //show element at front
 showfront();
 cout<<"Removing elements from queue\n";
 //removing elements from the queue
 dequeue();
 displayQueue();
 dequeue();
 displayQueue();
 dequeue();
 displayQueue();
 dequeue();
 displayQueue();
 dequeue();
 return 0;
}
