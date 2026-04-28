#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the no. of elements in the array:";
    int n; cin>>n;
    int arr[100];
    cout<<"Ehter the "<<n<<" elementsof the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The Entered Array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0; i<n; i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
    cout<<endl<<"The sorted Array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}