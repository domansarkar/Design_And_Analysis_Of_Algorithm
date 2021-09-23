/*
Question 2 : 
Given an already sorted array of positive integers, design an algorithm and implement it using a program to find 
whether given key element is present in the array or not. Also, find total number of comparisons for each input case. (Time Complexity = O(nlogn), 
where n is the size of input)

*/

#include<iostream>
using namespace std;

int binarySearchRecursive(int arr[], int left ,int right ,int key)
{
    int mid;
    if(left <= right){
        mid = left + (right-left)/2;
        if (arr[mid]== key){
                return mid;
        }
        else if(arr[mid]<key){
            binarySearchRecursive(arr, mid + 1, right, key);
        }
        else{
            binarySearchRecursive(arr, left, mid-1, key);
        }
    }
    else
    {
        return -1;
    }

}


int binarySearchIterative(int arr[], int left ,int right ,int key){
    int mid;
    while(left <= right){
        mid = left + (right-left)/2;
        if (arr[mid]== key){
            return mid;
        }
        else if(arr[mid]<key){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
}




int main(){
    int t;
        cin>>t;
        while(t!=0){
            int n ;
            cin >> n;
            int arr[n];
            int i =0;
            for(i=0;i<n;i++){
                cin>>arr[i];
            }
            int num;
            cin>>num;
            // int count = binarySearchIterative(arr, 0, n , num);
            int count = binarySearchRecursive(arr, 0, n , num);
            if(count == -1){
                cout<<"Not Present";
            }
            else{
                cout<<"Present "<<count+1;
            }
            t--;
        }
        return 0;
}
