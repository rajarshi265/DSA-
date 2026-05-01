#include<bits/stdc++.h>
using namespace std;

void LargestElement(vector<int> arr,int n){
    int largest = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<endl<<"The largest element is "<<largest<<endl;
}

int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    LargestElement(arr, n);
    return 0;
}