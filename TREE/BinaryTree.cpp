#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int val){
            data=val;
            left=right=NULL;
        }
};

static int idx=-1;
Node* BuildTree(vector<int>preorder){
    idx++;
    if(preorder[idx]==-1){
        return NULL;
    }
    Node* root=new Node(preorder[idx]);
    root->left=BuildTree(preorder);
    root->right=BuildTree(preorder);
    return root;
}


//preorder traversal
void preorder1(Node* root){
    if(root==NULL) return;
    cout<<root->data;
    preorder1(root->left);
    preorder1(root->right);
    
}

//inorder traversal
void inorder(Node* root){
    if(root==NULL) return;

    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}

//postorder traversal
void postorder(Node* root){
    if(root==NULL) return;
    preorder1(root->left);
    preorder1(root->right);
    cout<<root->data;
}

//levelorder traversal
void levelorder(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        cout<<temp->data;
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right); 
    }
}


//levelorder 2 traveral 
void levelorder2(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        if(temp==NULL){
            if(!q.empty()){
                cout<<endl;
                q.push(NULL);
                continue;
            }
            else{
                break;
            }     
        }
        cout<<temp->data;
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);  
    }
}

int main(){
    vector<int>preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node * Root=BuildTree(preorder);
    preorder1(Root);
    cout<<endl;
    inorder(Root);
    cout<<endl;
    postorder(Root);
    cout<<endl;
    levelorder(Root);
    cout<<endl;
    levelorder2(Root);
    return 0;
}