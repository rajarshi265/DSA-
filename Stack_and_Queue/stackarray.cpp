#include<iostream>
using namespace std;
#define MAX 100

class Stack{
    int top;
    int arr[MAX];

public:
    Stack(){
        top = -1;
    }

    void push(int value){
        if(top>=MAX){
            cout<<"Stack Overflow! Cannot push!"<<value<<endl;
        }
        else{
            top+=1;
            arr[top]=value;
            cout<<value<<"pushed into the Stack!"<<endl;
        }
    }
    void pop(){
        if(top<0){
            cout<<"Stack underflow! Empty Stack"<<endl;        
        }
        else{
            top-=1;
        }
    }
    void peek(){
        if(top<0){
            cout<<"Stack underflow! Empty Stack"<<endl;        
        }
        else{
            cout<<"Top Element:"<<arr[top]<<endl;
        }
    }
    void display(){
        if(top<0){
            cout<<"Stack underflow! Empty Stack"<<endl;        
        }
        else{
            cout<<"Stack elements:";
            for(int i=top; i>=0; i--){
                cout<<arr[i]<<" ";
                cout<<endl;
            }
        }
    }
};

int main(){
    Stack s;
    int choice,value;
    while(true){
        cout<<"Select from the menu:"<<endl;
        cout<<"1. Push\n2. Pop\n3. Seek\n4. Display\n5. Exit"<<endl;
        cout<<"Enter your choice:";
        cin>>choice;

        switch (choice){
        case 1:
            cout<<"Enter the value to be push:";
            cin>>value;
            s.push(value);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.peek();
            break;
        case 4:
            s.display();
            break;
        case 5:
            cout<<"Exiting program."<<endl;
            return 0;
        default:
            cout<<"Invalid output."<<endl;
            break;
        }
    }
}