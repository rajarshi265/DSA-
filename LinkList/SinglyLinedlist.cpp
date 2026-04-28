#include<iostream>
using namespace std;

class Node{
    public :
        int data;
        Node* next;

        Node(int val){
            data = val;
            next = NULL;
        }

};

class List{
    Node* head;
    Node* tail;
    public :
        List(){
            head=tail=NULL;
    }
    
    void push_front(int val){
        Node* newNode= new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }
    
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    
    void pop_front(){
        if(head==NULL){
            cout<<"Empty LL";
            return;
        }
        Node* temp=head;
        head=head->next;    //updating the head
        temp->next=NULL;    //pointing to null, cuting off the connection
        delete temp;
    }
    
    void pop_back(){
        if(head==NULL){
            cout<<"Empty LL";
            return;
        }
        Node* temp=head;
        while(temp->next!=tail  ){   //temp->next->next!=NULL (previous to tail)
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }

    int search(int key){
        Node* temp=head;
        int index=0;
        while(temp!=NULL){
            if(temp->data==key){
                return index;
            }
            temp=temp->next;
            index++;
        }
        return -1;
    }
    void printLL(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }


};

int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);
    ll.pop_front();
    ll.printLL();
    ll.pop_back();
    ll.printLL();
    ll.push_front(3);
    ll.push_back(4);
    ll.printLL(); 
    ll.search(2);
    return 0;
}