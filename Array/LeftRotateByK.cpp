#include<bits/stdc++.h>
using namespace std;
void LeftRotateK(vector <int> nums, int n, int k){
    k=k%n;
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());
    reverse(nums.begin(),nums.end());
    for(int i=0; i<n; i++ ){
        cout<<nums[i]<<" ";
    }
}
void LeftRotateK2(vector<int> nums, int n, int d){
    vector<int> temp(d);
    for(int i=0; i<d; i++){
        temp[i]=nums[i];
    }
    for(int i=d; i<n; i++){
        nums[i-d]=nums[i];
    }
    for(int i=n-d; i<n; i++){
        nums[i]=temp[i-(n-d)];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
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
    int k;
    cin>>k;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    LeftRotateK(arr, n, k);
    LeftRotateK2(arr, n, k);
    return 0;
}