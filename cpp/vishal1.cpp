#include<bits/stdc++.h>
using namespace std;
int items[1000];
int front = -1, rear =-1;
int isFull(int n)
{
    if( (front == rear + 1) || (front == 0 && rear == n-1)) 
	return 1;
	else
    return 0;
}
int isEmpty()
{
    if(front == -1)
	 return 1;
    return 0;
}
void enQueue(int element,int n)
{
    if(isFull(n)) 
    cout<<"queue is full";
    else
    {
        if(front == -1)
		front = 0;
        rear = (rear + 1) % n;
        items[rear] = element;
    }
}
int deQueue(int n)
{
    int element;
    if(isEmpty())
	 {
      cout<<"queue is empty";
        return(-1);
    } else 
	{
        element = items[front];
        if (front == rear){
            front = -1;
            rear = -1;
    } 
        else
		 {
            front = (front + 1) % n;
            
        }
        
        return(element);
    }
}
void display(int n)
{
    int i;
    if(isEmpty())
    cout<<"empty queue";
    else
    {
        for( i = front;i!=rear; i=(i+1)%n) {
            cout<<items[i]<<" ";
        }
        cout<<items[i];
       cout<<endl;
    }
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int b;
		cin>>b;
		enQueue(b,n);
	}
    cout<<"the queue after insertion is"<<endl;
    display(n);
    cout<<"queue after deleting first element is"<<endl;
    deQueue(n);
    display(n);
    cout<<" ";
    return 0;
}
