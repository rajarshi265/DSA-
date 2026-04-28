#include<iostream>
using namespace std;
int main(){
    int arr[100];
    cout<<"Enter the numbers of elements in the array: ";
    int n; cin>>n;
    cout<<"Enter the "<< n<<" elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"The elements in the array are: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Enter the element to be searched: ";
    int x; cin>>x;
    int low=0, high=n-1, mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==x){
            cout<<"Element found at index: "<<mid;
            break;
        }
        else if(arr[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        
    }
    return 0;
}