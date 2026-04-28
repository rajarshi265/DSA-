#include<iostream>
using namespace std;
#define MAX 100

class Queue{
    int arr [MAX];
    int start, end,cursize;

public:
    Queue(){
        start=-1;
        end=-1;
        cursize=0;
    }
        void push(int value){
            if(cursize==MAX){
                cout<<"Overflow! Queue is full!"<<endl;
                return;
            }
            if(cursize==0){
                start=0;
                end=0;
            }
            else{
                end=(end+1)%MAX;    
            }
            arr[end]=value;
            cout<<value<<" pushed into the queue.";
            cursize+=1;
        }
        void pop(){
            if(cursize==0){
                cout<<"Empty queue.";
                return;
            }
            cout<<arr[start]<<" poped out of the queue";
            if(cursize==1){
                start=end=-1;
            }
            else{               
                start=(start+1)%MAX;               
                cursize-=1;
            }
        }
        void top(){
            if(cursize==0){
                return;
            }
            else{
                cout<<arr[start]<<" Is the top Element"<<endl;
            }
        }
        void display(){
            if(start==-1 || start>end){
                cout<<"Empty queue";
            }
            
                cout<<"Queue elements: ";
                for(int i=start; i<=end; i++){
                    cout<<arr[i]<<" ";
                    
                }
            
                cout<<endl;
        }


};
int main() {
    Queue q;
    int choice, val;

    while (true) {
        cout << "\n1. Push\n2. Pop\n3. Front\n4. Display\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> val;
            q.push(val);
            break;
        case 2:
            q.pop();
            break;
        case 3:
            q.top();
            break;
        case 4:
            q.display();
            break;
        case 5:
            return 0;
        default:
            cout << "Invalid choice" << endl;
        }
    }
}