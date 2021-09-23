#include<iostream>
using namespace std;


int binarySearch(int arr[], int left ,int right ,int key){
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


int LinearSearch(int array[], int n, int key){
    int i = 0; 
    while (i!=n-1){
        if(key == array[i]){
            return i;
            break;
        }
        i++;
    }
    return -1;
}

int ExponentialSearch(int array[], int n , int key){
    if (array[0] == key){
        return 0;
    }
    int i = 1;
    while(i<n && array[i]<=key){
        i = i+2;
       // return LinearSearch(array, int(i/2),n,key)
        //return binarySearch(array, int(i/2), min(i,n-1),key)
    }
}

