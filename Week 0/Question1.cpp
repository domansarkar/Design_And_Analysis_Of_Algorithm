/* 

Question-1: Given an array of nonnegative integers, design a linear algorithm and implement it using a program to find whether a given key element
is present in the array or not. Also, find the total number of comparisons for each input case. (Time Complexity = O(n), where n is the size of 
input). 

*/


#include<iostream>
using namespace std;

void searchElement(int arr[], int n, int num){
    int i = 0, count = 0, index = -1; bool match = false;
    while (i!=n-1){
        count++;
        if(num == arr[i]){
            cout<<"Element Matched!\n";
            match = true;
            index = i + 1;
            break;
        }
        i++;
    }
    if(match == false){
        cout<<"\nElement not found!!!\n";
    }
    else{
        cout<<"\nElement Found at index:"<<index;
    }

    cout<<"\nTotal Number of Comparisions performed : "<<count;

}

int main(){
    int n;
    cout<<"Enter array Size: ";
    cin>> n;
    int arr[n];
    cout<<"\nEnter array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nYour Entered array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    int num;
    cout<<"\nEnter number u wanna search : ";
    cin>>num;
    searchElement(arr, n , num);
    return 0;

}



