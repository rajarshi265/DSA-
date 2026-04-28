#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the no. of elements in the array: ";
    int n; cin>>n;
    int arr[100];
    cout<<"Enter the "<<n<<" Elements of the array;";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"The Entered Array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";  
    }
    for(int i=n-1; i>=1; i--){
        int swapped = 0;
        for(int j=0; j<i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }
        if(swapped == 0){
            break;
        }
    }
    cout<<"\nThe Sorted Array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";  
    }

    return 0;
}    