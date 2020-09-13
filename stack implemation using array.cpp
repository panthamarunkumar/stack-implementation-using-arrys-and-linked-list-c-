# stack-implementation-using-arrys-and-linked-list-c-
#include<iostream>
using namespace std;
#define SIZE 5
int stack[SIZE];
int top=-1;
void push()
{
    int x;
    cout<<"enter the ele to insert";
    cin>>x;
    if(top==SIZE-1)
    {
        cout<<"over flow";
    }
    else
    {
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top==-1)
    {
        cout<<"stack empty";
    }
    else
    {
        cout<<"poped element is"<<stack[top]<<" ";
        cout<<"\n";
        top--;
        
    }
}
void peek()
{
 cout<<"the peek element is:"<<stack[top];
    
    
}

void display()
{
    int i;
    for(i=0;i<=top;i++)
    {
        cout<<stack[i]<<" ";
        cout<<"\n";
    }
}
int main()
{
    push();
    pop();
    push();
    push();
    display();
    peek();
}
