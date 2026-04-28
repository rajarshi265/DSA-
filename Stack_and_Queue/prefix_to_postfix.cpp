#include<iostream>
#include<stack>
#include<string>

using namespace std;

string prefixtopostfix(string s){
    stack<string> st;
    int i=s.size()-1;
    while(i>=0){
        if(( s[i]>='a' && s[i]<='z') ||
            (s[i]>='A' && s[i]<='Z') ||
            (s[i]>='0' && s[i]<='9')){
                string op(1, s[i]);  //created a new string to store to the stack!!
                st.push(op);   // push the string to the stack 
        }
        else{
            string op1=st.top();
            st.pop();
            string op2=st.top();
            st.pop();
            string temp=op1 + op2 + s[i] ;   //  top1 top2 operator
            st.push(temp);
        }
        i--;
    }
    return st.top();
}

int main(){
    string prefix;
    cout<<"Enter the Prefix expression: ";
    cin>>prefix;
    string postfix=prefixtopostfix(prefix);
    cout<<"The postfix expression is: "<<postfix;

    return 0;
}