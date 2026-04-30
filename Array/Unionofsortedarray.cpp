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
    vector <int> unionArr(0);

    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            if(unionArr.size()==0 || unionArr.back() != a[i]){
                unionArr.push_back(a[i]);
            }
            i++;
        }
        else{
            if(unionArr.size()==0 || unionArr.back() != b[j]){
                unionArr.push_back(b[j]);
            }
            j++;
        }

    }
    while(i<n1){
        if(unionArr.size()==0 || unionArr.back() != a[i]){
                unionArr.push_back(a[i]);
            }
            i++;
    }
    while(j<n2){
        if(unionArr.size()==0 || unionArr.back() != b[j]){
                unionArr.push_back(b[j]);
            }
            j++;
    }

    cout<<"The union of the two array is: " ;
    for(int i=0 ; i<unionArr.size(); i++){
        cout<< unionArr[i]<<" ";
    }

    return 0;
}