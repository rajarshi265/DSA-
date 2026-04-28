#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr, int low, int high){
    int pivot=arr[low];     //choosing the first element as pivot
    int i=low;
    int j=high;
    while (i<j){
        while (arr[i]<=pivot && i<high){    //to avoid going out of bound
            i++;
        }
        while(arr[j]>pivot && j>low){
            j--;                            //to avoid going out of bound
        }
        if(i<j)swap(arr[i], arr[j]);        //swap only if i<j
    }

    swap(arr[low], arr[j]);//change the pivot to its correct position
    
    return j;     //retrun the pvot index
}

void QS(vector<int> &arr, int low, int high){   //Quick Sort
    if(low<high){
        int pIndex=partition(arr, low, high);  //pIndex is the index where pivot is finally placed
        QS(arr, low, pIndex-1);  //sort the left part of the pivot
        QS(arr, pIndex+1, high);  //sort the right part of the pivot
    }
}

int main(){
    cout<<"Enter the number od elements: ";
    int n; cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    QS(arr, 0, n-1);
    cout<<"Array after sorting: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}