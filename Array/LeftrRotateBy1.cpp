#include<bits/stdc++.h>
using namespace std;

void LeftRotate (vector <int> nums, int n){
    int temp=nums[0];
    for(int i=1; i<n; i++){
        nums[i-1]=nums[i];
    }
    nums[n-1]=temp;

    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
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
    LeftRotate(arr, n);
    return 0;
}