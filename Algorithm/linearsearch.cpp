#include<iostream>
using namespace std;
int main(){
    
    int arr[100];
    std :: cout<<"Enter the number of elements in the array: ";
    int n; cin>>n;
    cout<<"Enter the " << n << " elements in the array: ";
    for( int i=0; i<n; i++ ){
        cin>>arr[i];
        
    }
    cout<<"The elements in the array are: ";
    for( int i=0; i<n; i++ ){
        cout<<arr[i]<<" ";
    }

    cout<< endl <<"Enter the element to be searched: ";

    int x; cin>>x;
    for( int i=0; i<n; i++ ){
        if( arr[i] == x ){
            cout<<"Element found at index: "<<i;        
        }
        else if( i>=n-1){
            cout<<"Element not found";
        }
    }
    return 0;
}