#include<bits/stdc++.h>
using namespace std;


int merge(vector <int>& arr, int low,int mid,int high){

    vector<int> temp;
    

    while(arr[])
}



int mergeSort( vector <int>& arr, int low, int high){

    if(low >=high)
        return;
    
    int mid = (low + high)/2;


    mergeSort(arr,low,mid);

    
    mergeSort(arr,mid+1,high);
    

    merge(arr,low,mid,high);

}




int main(){


    vector <int> arr = {1,3,7,4,3,1};
    
    mergeSort(arr);
}