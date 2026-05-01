#include<bits/stdc++.h>
using namespace std;
void RemoveDuplicate(vector<int> arr, int n){
    int left=0;
        for(int i=1; i<n; i++){
            if(arr[i]!= arr[left]){
                arr[left+1]= arr[i];
                left++;
            }
        }
        cout<<endl<<left+1<<endl;
        for(int i=0; i<=left; i++){
            cout<<arr[i]<<" ";
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
    RemoveDuplicate(arr, n);

    return 0;
}