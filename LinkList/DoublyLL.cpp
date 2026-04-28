#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* previous;
            Node(int val){
                data=val;
                next=previous=NULL;
            }
};

class doublyLL{
        Node* head;
        Node* tail;
        public:
        doublyLL(){
            head=tail=NULL;
        }

        void push_front(int val){
            Node* newNode=new Node(val);
            if(head==NULL){
                head=tail=newNode;
            }
            else{
                newNode->next=head;
                head->previous=newNode;
                head=newNode;
            }
        }

        void push_back(int val ){
            Node* newNode = new Node(val);
            if(head==NULL){
                head=tail=NULL;
            }
            else{
                newNode->previous=tail;
                tail->next=newNode;
                tail=newNode;
            }
        }

        void pop_front(){
            Node* temp;
            temp=head;
            head=head->next;
            temp->next=NULL;
            if(head!=NULL){
                head->previous=NULL;
            }
            delete temp;
        }

        void pop_back(){
            Node*temp;
            Node*prev;
            temp=head;
            prev=NULL;
            while(temp->next!=NULL){
                prev=temp;
                temp=temp->next;
            }
            temp->previous=NULL;
            if(prev!=NULL){
                prev->next=NULL;
            }
            delete temp;

        }

        void printdll(){
            Node* temp;
            temp=head;
            while(temp!=NULL){
                cout<<temp->data<<" <-> ";
                temp=temp->next;
            }
            cout<<"NULL"<<endl;
        }

};

int main(){
    doublyLL dl;
    dl.push_front(1);
    dl.push_front(2);
    dl.push_front(3);
    dl.push_back(4);
    dl.printdll();
    dl.pop_front();
    dl.printdll();
    dl.pop_back();
    dl.printdll();
    return 0;
}
