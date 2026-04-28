#include<iostream>
#include<stack>
#include<string>

using namespace std;

string postfixtoinfix(string s){
    stack<string>st;
    int i=0;
    while(i<s.size()){
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
            string temp="("+ op2 + s[i] + op1 + ")";
            st.push(temp);
        }
        i++;
    }
    return st.top();
}

int main(){
    string infix;
    cout<<"Enter the Postfix expression: ";
    cin>>infix;
    string postfix=postfixtoinfix(infix);
    cout<<"The Infix expression is: "<<postfix;

}