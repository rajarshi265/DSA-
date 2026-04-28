#include<iostream>
using namespace std;
 
int main(){
    stack<int> st;
    for(int i=0; i<5; i++){
        int n;
        cin>>n;
        st.push(n);
    }
    cout<<st.top()<<endl;
    cout<<st.size();
    return 0;
}

