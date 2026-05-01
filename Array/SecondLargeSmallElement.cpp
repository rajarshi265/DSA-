#include<bits/stdc++.h>
using namespace std;
void SecondLargest(vector<int> arr, int n){
    int largest = arr[0];
    int seclargest = INT_MIN;
    for(int i=1; i<n; i++){
        if(arr[i]>largest){
            seclargest=largest;
            largest=arr[i];

        }
        else if(arr[i]<largest && arr[i]>seclargest){
            seclargest=arr[i];
        }
    }
    cout<<endl<<"The second Largest element is "<<seclargest;
}

void SecondSmallest(vector<int> arr, int n){
    int smallest = arr[0];
    int secsmallest = INT_MAX;
    for(int i=1; i<n; i++){
        if(arr[i]<smallest){
            secsmallest=smallest;
            smallest=arr[i];

        }
        else if(arr[i]>smallest && arr[i]<secsmallest){
            secsmallest=arr[i];
        }
    }
    cout<<endl<<"The second smallest element is "<<secsmallest;
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
    SecondLargest(arr, n);
    SecondSmallest(arr, n);
    return 0;
}