#include<iostream>
#include<vector>
using namespace std;

int main(){
    cout<<"Enter the number of element in the first array: ";
    int n1; cin>>n1;
    vector <int> a(n1);
    cout<<"Enter the first Sorted array: ";
    for(int i=0; i<n1; i++){
        cin>>a[i];
    }
    cout<<"Enter the number of element in he second array: ";
    int n2; cin>>n2;
    vector <int> b(n2);
    cout<<"Enter the Second Sorted array: ";
    for(int i=0; i<n2; i++){
        cin>>b[i];
    }

    int i=0;
    int j=0;
    vector <int> ans(0);

    while(i<n1 && j<n2){
        if(a[i] < b[j]){
            i++;
        }
        else if(b[j] < a[i]){
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }

    cout<<"The union of the two array is: " ;
    for(int i=0 ; i<ans.size(); i++){
        cout<< ans[i]<<" ";
    }

    return 0;
}

