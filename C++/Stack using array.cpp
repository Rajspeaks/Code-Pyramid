#include <iostream>
using namespace std;
string stack[100];
int n=100, top=-1;// take top as an element which will be going to move in stack 
//USERDEFINED Function of insertion of stack
void push(string val) { 
if(top>=n-1)
cout<<"Stack Overflow"<<endl;  //stack is already fulled
else {
top++;              //increment top from -1 to 0 for insertion
stack[top]=val;     // insertion done
}
}
//USERDEFINED Function of deletion of stack
void pop() {
if(top<=-1)
cout<<"Stack Underflow"<<endl;      //stack is empty element cant be deleted
else {
cout<<"The popped element is "<< stack[top] <<endl;         //print the deleted element
top--;
}
}
//USERDEFINED Function of display of stack
void display() {
if(top>=0) {            //stack is empty
cout<<"Stack elements are:";
for(int i=top; i>=0; i--)
cout<<stack[i]<<" ";        //printing elemets from top to bottom
cout<<endl;
} else
cout<<"Stack is empty";
}
//USERDEFINED Function of printing top element of stack
void peek(){
    
    cout<<stack[top];
}
int main() {
int ch;
string val;
cout<<"1) Push in stack"<<endl;
cout<<"2) Pop from stack"<<endl;
cout<<"3) Display stack"<<endl;
cout<<"4) Exit"<<endl;
do {
cout<<"Enter choice: "<<endl;
cin>>ch;
switch(ch) {                //for choice which function you want to call
case 1: {
cout<<"how many elements you want to push in a stack";
cin>>n;
for(int i=0;i<n;i++)
{
cout<<"Enter value to be pushed:"<<endl;
cin>>val;
push(val);          //function calling
}
break;
}
case 2: {
pop();              //function calling
break;
}
case 3: {
display();          //function calling
break;
}
case 4: {
cout<<"Exit"<<endl;     //exiting the program
break;
}
default: {
cout<<"Invalid Choice"<<endl;
}
}
}while(ch!=4);
return 0;
}

