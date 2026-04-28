#include<iostream>
#include<string>
#include<algorithm>
#include<stack>

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

string infixtoprefix(string s){

    stack<char>st;
    string ans;
    //reverse the opening and closing bracket!
    reverse(s.begin(),s.end());
    for(int i=0; i<s.length(); i++){
        if(s[i]=='('){
            s[i]=')';
        }
        else if(s[i]==')'){
            s[i]='(';
        }
    }
    
    int i=0;
    while (i<s.size())
    {
        if((s[i]>='A' && s[i]<='Z') ||
           (s[i]>='a' && s[i]<='z') ||
           (s[i]>='0' && s[i] <='9') ){
            ans+=s[i];
        }
        else if(s[i]=='('){      // if opening bracket then push to the stack
            st.push(s[i]);
        }
        else if(s[i]==')'){
            while (!st.empty() && st.top()!='(')   // if closing bracket, then put all the elements of the stack to the ans wntil encounter a opening bracket
            {                                       //then pop the opening bracket from the stack
                ans+=st.top();
                st.pop();
            }
            st.pop();   
        }
        else{
            if(s[i]=='^'){
                while(!st.empty() && priority(s[i])<priority(st.top())){
                    ans+=st.top();
                    st.pop();
                }
            }
            else{
                while(!st.empty() && priority(s[i]) <= priority(st.top())){              // if the priority of the operator is lower os same then the top of the stack 
                    ans+=st.top();                                                      // then we add the operators to the ans until a higher operator encounters
                    st.pop();
                }
            }
            st.push(s[i]);
        }
        i++;
    }
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    string infix;
    cout<<"Enter the Infix expression: ";
    cin>>infix;
    string prefix=infixtoprefix(infix);
    cout<<"The prefix expression is "<<prefix;

    return 0;

}
