#include<iostream>
#include<stack>
#include<string>
using namespace std;

int priority(char c){
    if(c=='^')
        return 3;
    else if(c=='*'||c=='/')
        return 2;
    else if(c=='+'||c=='-')
        return 1;
    else
        return -1;
}

string infixtopostfix(string s){
    stack<char>st;
    string ans;
    int i=0;
    while( i<s.size()){
        if(s[i]>='A' && s[i]<='Z' ||
           s[i]>='a' && s[i]<='z' ||
           s[i]>='0' && s[i]<='9'){
            ans+=s[i];
           }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            while(!st.empty() && st.top()!='('){
                ans+=st.top();
                st.pop();                
            }
            st.pop(); //pop the opening bracket '('
        }
        else{
            while(!st.empty() && priority(s[i]) <= priority(st.top())){
                ans+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        
        i++;
    }
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    return ans;
}

int main(){
    string infix;
    cout<<"Enter the infix expression: ";
    cin>>infix;
    string postfix=infixtopostfix(infix);
    cout<<"The Postfix expression is: "<<postfix;
    return 0;
}