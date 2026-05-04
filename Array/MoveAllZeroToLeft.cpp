#include<bits/stdc++.h>
using namespace std;
void MoveZero(vector<int> nums, int n){
    vector<int>temp;
    for(int i=0; i<n; i++){
        if(nums[i]!=0){
            temp.push_back(nums[i]);
        }
    }
    
    int size=temp.size();
    for(int i=0; i<size; i++){
        nums[i]=temp[i];
    }
    for(int i=size; i<n; i++){
        nums[i]=0;
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
}

void MoveZero2(vector<int> nums, int n){
    int j=-1;
    for(int i=0;i<n;i++){
        if(nums[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1){
        return;
    }
    for(int i=j+1;i<n;i++){
        if(nums[i]!=0){
            swap(nums[j],nums[i]);
            j++;
        }
    }
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
    MoveZero(arr, n);
    MoveZero2(arr, n);
    return 0;
}