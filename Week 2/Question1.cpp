/*
    Moore's
*/

#include<iostream>

using namespace std;

int binarySearchIterative(int arr[], int n ,int key){
    int mid;
    int left = 0, right = n-1;
    int first_occ=-1, last_occ = -1;
    // Calculating First Occurence
    while(left <= right){
        mid = (left + right)/2;
        if(arr[mid] == key){
            first_occ = mid;
            right = mid - 1;
        }else if(arr[mid] > key){
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }
    left = 0;
    right = n-1;
    // Calculating Last Occurrence
    while(left <= right){
        mid = (left + right)/2;
        if(arr[mid] == key){
                last_occ = mid;
                left = mid + 1;
        }else if(arr[mid] > key){
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }
    if(first_occ>=0 && last_occ>=0){
        return last_occ-first_occ+1;
    }else{
        return 0;
    }
    
}


int main(){
    int t;
    cin>> t;
    while(t>0){
        int n;
        cin>>n;
        int arr[n];
        int key;
        for(int i=0;i<n;i++){
            cin>>arr[i];   // Taking Array Input
        }
        cin>>key;
        int count ;
        count = binarySearchIterative(arr,n,key);
        if(count!=0){
            cout<< key <<" - "<<count;
        }else{
            cout<<"Key not Present!";
        }
        t--;
    }
    return 0;
}