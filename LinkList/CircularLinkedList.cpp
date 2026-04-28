#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

class CircularLL{
    Node* head;
    Node* tail;
        public:
        CircularLL(){
            head=tail=NULL;
        }

    void insertAThead(int val){
        Node* newnode=new Node(val);
        if(head==NULL){
            head=tail=newnode;
            tail->next=newnode;
        }
        else{
            newnode->next=head;
            head=newnode;
            tail->next=head;
        }
    }  
    
    void insertATtail(int val){
        Node* newnode=new Node(val);
        if(head==NULL){
            head=tail=newnode;
            tail->next=head;
        }
        else{
            newnode->next=head;
            tail->next=newnode;
            tail=newnode;
        }
    }

    void deleteAThead(){
        if(head==NULL){
            return;
        }
        else if(head==tail){
            delete head;
            head = tail = NULL;
        }
        else{
            Node* temp;
            temp=head;
            head=head->next;
            tail->next=head;
            temp->next=NULL;
            delete temp;
        }
    }

    void deleteATtail(){
        if(head==NULL){
            return;
        }
        else if(head==tail){
            delete head;
            head = tail = NULL;
        }
        else{
            Node* prev;
            prev=head;
            while(prev->next!=tail){
                prev=prev->next;
            }
            tail=prev;
            prev=prev->next;
            tail->next=head;
            prev->next=NULL;
            delete prev;
        }
    }

    void printCLL(){
        cout<<head->data<<"->";
        Node* temp;
        temp=head->next;
        while(temp!=head){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<head->data<<"  "<<endl;
    }
};

int main(){
    CircularLL cll;
    cll.insertAThead(1);
    cll.insertAThead(2);
    cll.insertAThead(3);
    cll.insertATtail(4);
    cll.printCLL();
    cll.deleteAThead();
    cll.printCLL();
    cll.deleteATtail();
    cll.deleteATtail();
    cll.deleteATtail();
    cll.printCLL();
    return 0;
}